%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include "node.h"
	
	extern FILE *yyin;
	extern char *yytext;
	
	extern int yylex();
	void yyerror(const char* s);

	FILE* outfile;

	int sec_count = 0;
	int subsec_count = 0;
	int fig_count = 0;

	struct node{
		char id[20];
		char val[100]; 
		int sec_cnt;
		int subsec_cnt;
	};

	struct node label_data[100];
	int label_count=0;

	char key1[20];
	char key2[100];

	struct tree* ptr[1000];
	struct tree* temp;
	struct tree* ROOT;

	char *tempstr1, *tempstr2;
	char buffer[10000];

%}

%union{
	struct tree* PTR;
}

%start strt

%token 	CRLOB		CRLCB
%token 	SQOB 		SQCB
%token 	PRNOB		PRNCB

%token 	BGN			END
%token 	DOCCLS		DOC

%token  USPKG

%token 	STR 		NL 		MSTR
%token 	DDLR 	 	DLR
%token 	SUP 		SUB
%token 	SQRT		SUM 	INT 	FRAC

%token 	PAR 		SEC 	SUBSEC 	CLN 	
%token 	LBL			REF

%token 	ITEMIZE 	ENUM 	ITEM

%token 	CAPTION 	FIG 	INCGRAP
%token 	TUL 		TIF 	TBF
%token  TBLR		HL		VB		AMP		DD

%type<PTR> 			strt 	part_a 	part_b 	preamble
%type<PTR>			content content1
%type<PTR>			sec 	subsec 	ref

%type<PTR>			un 		bf 		if 		par
%type<PTR>			ul 		ul_open ul_items ul_close ul_item
%type<PTR>			ol 		ol_open ol_items ol_close ol_item

%type<PTR>			figenv	fig_open	fig_close	fig_content 	fig_part 	caption 	img
%type<PTR>			table 	table_open 	table_close 
%type<PTR>			tablerow 	rowcontent	col 	tblcontent

%type<PTR>			math math_content frac math_subcontent sumint sumint_supsub supenv subenv supenv_content subenv_content math_content1 

%%
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/

/***********************************************************************************************************************************/

strt		: 	{ptr[0] = create_tree("<html>");}	
				part_a {connect_r_sibling(ptr[0],$2);}	
				part_b {connect_r_sibling(ptr[0],$4);}
				{connect_r_sibling(ptr[0],create_tree("</html>"));}
				{ROOT = create_tree("@root"); connect_l_child(ROOT,ptr[0]);}
				;

part_a 		: 	{ptr[1] = create_tree("<head>");}		
				DOCCLS CRLOB DOC CRLCB 
				preamble		
				{connect_r_sibling(ptr[1],create_tree("</head>"));}
				{$$ = create_tree("@part_a"); connect_l_child($$,ptr[1]);}
				;

part_b 		: 	{ptr[2] = create_tree("<body>");}		
				BGN CRLOB DOC CRLCB  
				content {connect_r_sibling(ptr[2],$6);}
				END CRLOB DOC CRLCB 	
				{connect_r_sibling(ptr[2],create_tree("</body>"));}
				{$$ = create_tree("@part_b"); connect_l_child($$,ptr[2]);}
				;

preamble 	:	preamble1							{$$ = empty_tree();}
				|									{$$ = empty_tree();};

preamble1 	:	USPKG CRLOB STR CRLCB preamble1					
				|USPKG CRLOB STR CRLCB							;

content 	: 	content1 	
				content 	
				{ptr[3] = $1;} 
				{connect_r_sibling(ptr[3],$2);}
				{$$ = create_tree("@content"); connect_l_child($$,ptr[3]);}
				;				

				|content1	
				{ptr[4] = $1;}
				{$$ = create_tree("@content"); connect_l_child($$,ptr[4]);}
				;

content1 	:   STR {ptr[5] = create_tree(yytext);}
				{$$ = create_tree("@content1"); connect_l_child($$,ptr[5]);}

				|sec 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}

				|subsec 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}

				|ref 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}

				|un 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}

				|if 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}
				
				|bf 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}
				
				|par 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}
				
				|ul 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}
				
				|ol 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}
				
				|figenv 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}
				
				|table 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}
		
				|math 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}

				|img 
				{$$ = create_tree("@content1"); connect_l_child($$,$1);}


				;
				

/***********************************************************************************************************************************/

/******************************************************* SECTION and SUBSECTION ****************************************************/

sec         :	SEC CRLOB STR 
				{sprintf(buffer,"%d %s",++sec_count,yytext);}
				{subsec_count = 0;}	
				{ptr[51] = create_tree("<h1>");}
				{connect_r_sibling(ptr[51],create_tree(buffer));}
				{connect_r_sibling(ptr[51],create_tree("</h1>"));}
				CRLCB 	
				label
				{$$ = create_tree("@sec"); connect_l_child($$,ptr[51]);}
				;

subsec 		:	SUBSEC CRLOB STR 
				{sprintf(buffer,"%d.%d %s",sec_count,++subsec_count,yytext);}	
				{ptr[52] = create_tree("<h3>");}
				{connect_r_sibling(ptr[52],create_tree(buffer));}
				{connect_r_sibling(ptr[52],create_tree("</h3>"));}
				CRLCB 
				label
				{$$ = create_tree("@subsec"); connect_l_child($$,ptr[52]);}
				;

/***********************************************************************************************************************************/

/********************************************************* LABEL and REFERENCE *****************************************************/

label 		: 	LBL	CRLOB STR 
				{strcpy(label_data[label_count].id,yytext);}
				CLN STR 
				{
					strcpy(label_data[label_count].val,yytext);
					label_data[label_count].sec_cnt = sec_count;
					label_data[label_count].subsec_cnt = subsec_count;
					label_count++;
				} 
				CRLCB
				
				|;

ref			:	REF CRLOB STR 
				{strcpy(key1,yytext);} 
				CLN STR 
				{strcpy(key2,yytext);} 
				CRLCB
					{
						for(int i=0;i<label_count;i++)
						{
							if(strcmp(label_data[i].id,key1)==0 && strcmp(label_data[i].val,key2)==0)
							{	
								if(label_data[i].subsec_cnt==0)	{
									sprintf(buffer,"%d",label_data[i].sec_cnt);
									ptr[53] = create_tree(buffer);
								}
								else 
									sprintf(buffer,"%d.%d",label_data[i].sec_cnt,label_data[i].subsec_cnt);
									ptr[53] = create_tree(buffer);
							}
						}
					}
				{$$ = create_tree("@ref"), connect_l_child($$,ptr[53]);}
				;	

/***********************************************************************************************************************************/

/********************************************* PARAGRAPH, UNDERLINE ITALIC and BOLD FONT *******************************************/

un 			: 	TUL CRLOB STR 
				{ptr[54] = create_tree("<u>");}
				{connect_r_sibling(ptr[54],create_tree(yytext));}
				{connect_r_sibling(ptr[54],create_tree("</u>"));}
				CRLCB
				{$$ = create_tree("@underline"); connect_l_child($$,ptr[54]);}
				;

if 			: 	TIF CRLOB STR 
				{ptr[55] = create_tree("<i>");}
				{connect_r_sibling(ptr[55],create_tree(yytext));}
				{connect_r_sibling(ptr[55],create_tree("</i>"));}
				CRLCB
				{$$ = create_tree("@italic"); connect_l_child($$,ptr[55]);}
				;
				
bf 			: 	TBF CRLOB STR 
				{ptr[56] = create_tree("<b>");}
				{connect_r_sibling(ptr[56],create_tree(yytext));}
				{connect_r_sibling(ptr[56],create_tree("</b>"));}
				CRLCB
				{$$ = create_tree("@bold"); connect_l_child($$,ptr[56]);}
				;

par 		: 	PAR CRLOB STR 				
				{ptr[57] = create_tree("<p>");}
				{connect_r_sibling(ptr[57],create_tree(yytext));}
				{connect_r_sibling(ptr[57],create_tree("</p>"));}
				CRLCB
				{$$ = create_tree("@paragraph"); connect_l_child($$,ptr[57]);}
				;

/***********************************************************************************************************************************/

/**************************************************** ORDERED and UNORDERED LISTS **************************************************/

ul 		 	: 	ul_open ul_items ul_close						
				{ptr[58] = $1;}
				{connect_r_sibling(ptr[58],$2);}
				{connect_r_sibling(ptr[58],$3);}
				{$$ = create_tree("@ul"); connect_l_child($$,ptr[58]);}
				;

ul_open  	: 	BGN CRLOB ITEMIZE CRLCB 
				{$$ = create_tree("@ul_open"); connect_l_child($$,create_tree("<ul>"));}
				;

ul_items 	:   ul_item 	 
				ul_items	
				{ptr[59] = $1;}
				{connect_r_sibling(ptr[59],$2);}
				{$$ = create_tree("@ul_items"); connect_l_child($$,ptr[59]);}

				|ul_item 
				{ptr[59] = $1;}
				{$$ = create_tree("@ul_items"); connect_l_child($$,ptr[59]);}				
				;

ul_item 	: 	ITEM STR 
				{ptr[60] = create_tree("<li>");}
				{connect_r_sibling(ptr[60],create_tree(yytext));}
				{connect_r_sibling(ptr[60],create_tree("</li>"));}
		 	  	{$$ = create_tree("@ul_item");connect_l_child($$,ptr[60]);}
		 	  	;


ul_close 	: 	END CRLOB ITEMIZE CRLCB 
				{$$ = create_tree("@ul_close"); connect_l_child($$,create_tree("</ul>"));}
				;


ol		 	: 	ol_open ol_items ol_close
				{ptr[61] = $1;}
				{connect_r_sibling(ptr[61],$2);}
				{connect_r_sibling(ptr[61],$3);}
				{$$ = create_tree("@ol"); connect_l_child($$,ptr[61]);}
				;

ol_open  	: 	BGN CRLOB ENUM CRLCB  
				{$$ = create_tree("@ol_open"); connect_l_child($$,create_tree("<ol>"));}
				;

ol_items 	:   ol_item 	 
				ol_items	
				{ptr[62] = $1;}
				{connect_r_sibling(ptr[62],$2);}
				{$$ = create_tree("@ol_items"); connect_l_child($$,ptr[62]);}

				|ol_item 
				{ptr[62] = $1;}
				{$$ = create_tree("@ol_items"); connect_l_child($$,ptr[62]);}				
				;

ol_item 	: 	ITEM STR 
				{ptr[63] = create_tree("<li>");}
				{connect_r_sibling(ptr[63],create_tree(yytext));}
				{connect_r_sibling(ptr[63],create_tree("</li>"));}
		 	  	{$$ = create_tree("@ol_item");connect_l_child($$,ptr[63]);}
		 	  	;

ol_close 	: 	END CRLOB ENUM CRLCB 
				{$$ = create_tree("@ol_close"); connect_l_child($$,create_tree("</ol>"));}
				;

/***********************************************************************************************************************************/

/********************************************************* FIGURE ENVIRONMENT ******************************************************/

figenv 		: 	fig_open fig_content fig_close					
				{fig_count=0;}
				{ptr[64] = $1;}
				{connect_r_sibling(ptr[64],$2);}
				{connect_r_sibling(ptr[64],$3);}
				{$$ = create_tree("@figure"); connect_l_child($$,ptr[64]);}
				;

fig_open	:	BGN CRLOB FIG CRLCB	
				{$$ = create_tree("@fig_open"); connect_l_child($$,create_tree("<figure>"));}
				;

fig_close	: 	END CRLOB FIG CRLCB
				{$$ = create_tree("@fig_close"); connect_l_child($$,create_tree("</figure>"));}
				;

fig_content	: 	fig_part fig_content
				{ptr[65] = $1;}
				{connect_r_sibling(ptr[65],$2);}
				{$$ = create_tree("@fig_content"); connect_l_child($$,ptr[65]);}

				|fig_part
				{ptr[65] = $1;}
				{$$ = create_tree("@fig_content"); connect_l_child($$,ptr[65]);}				
				;

fig_part	:	img  
				{++fig_count;} 	
				caption
				{ptr[66] = $1;}
				{connect_r_sibling(ptr[66],$3);}
				{$$ = create_tree("@fig_part"); connect_l_child($$,ptr[66]);}

				|img 
				{++fig_count;}
				{ptr[66] = $1;}
				{$$ = create_tree("@fig_part"); connect_l_child($$,ptr[66]);}
				;

img		 	: 	INCGRAP CRLOB STR 
				{sprintf(buffer,"src=%s",yytext);}  
				{ptr[67] = create_tree("<img ");}
				{connect_r_sibling(ptr[67],create_tree(buffer));}
				{connect_r_sibling(ptr[67],create_tree(">"));}
				CRLCB
				{$$ = create_tree("@img"); connect_l_child($$,ptr[67]);}
				;

caption 	: 	CAPTION CRLOB STR
				{sprintf(buffer,"Figure%d:%s",fig_count, yytext);}  
				{ptr[68] = create_tree("<figcaption>");}
				{connect_r_sibling(ptr[68],create_tree(buffer));}
				{connect_r_sibling(ptr[68],create_tree("</figcaption>"));}
				CRLCB
				{$$ = create_tree("@caption"); connect_l_child($$,ptr[68]);}
				;


/***********************************************************************************************************************************/

/******************************************************** TABULAR ENVIRONEMNT ******************************************************/

table 		: 	table_open  
				tblbr 
				tblcontent 
				table_close

				{ptr[70] = $1;}
				{connect_r_sibling(ptr[70],$3);}
				{connect_r_sibling(ptr[70],$4);}
				{$$ = create_tree("@table"); connect_l_child($$,ptr[70]);}
				;

table_open	:	BGN CRLOB TBLR CRLCB 
				{$$ = create_tree("@tbl_open"); 
				connect_l_child($$,create_tree("<table style=\"border : 1px solid black\">"));}
				;

table_close :	END CRLOB TBLR CRLCB 
				{$$ = create_tree("@tbl_close"); connect_l_child($$,create_tree("</table>"));}
				;

tblbr		: 	CRLOB tblbr_content CRLCB
			|	{}												;

tblbr_content: 	STR tblbr_content 
			| 	VB tblbr_content
			| 	STR
			| 	VB													;

tblcontent  : 	HL tablerow DD tblcontent
				{ptr[71] = $2;}
				{connect_r_sibling(ptr[71],$4);}
				{$$ = create_tree("@tbl_content"); connect_l_child($$,ptr[71]);}

			| 	tablerow DD tblcontent
				{ptr[71] = $1;}
				{connect_r_sibling(ptr[71],$3);}
				{$$ = create_tree("@tbl_content"); connect_l_child($$,ptr[71]);}

			|	HL tablerow DD 
				{ptr[72] = $2;}
				{$$ = create_tree("@tbl_content"); connect_l_child($$,ptr[72]);}				

			| 	tablerow DD
				{ptr[72] = $1;}
				{$$ = create_tree("@tbl_content"); connect_l_child($$,ptr[72]);}
				;

tablerow	: 	rowcontent
				{ptr[73] = create_tree("<tr style=\"border : 1px solid black\">");}
				{connect_r_sibling(ptr[73],$1);}
				{connect_r_sibling(ptr[73],create_tree("</tr>"));}
				{$$ = create_tree("@tblrow"); connect_l_child($$, ptr[73]);}
				;

rowcontent	: 	col		AMP		rowcontent		
				{ptr[74] = $1;}
				{connect_r_sibling(ptr[74],$3);}
				{$$ = create_tree("@row_content"); connect_l_child($$,ptr[74]);}

			|	col 
				{ptr[74] = $1;}
				{$$ = create_tree("@row_content"); connect_l_child($$,ptr[74]);}
				;

col 		:	mstr
				{ptr[75] = create_tree("<td style=\"border : 1px solid black\">");}
				{connect_r_sibling(ptr[75],create_tree(yytext));}
				{connect_r_sibling(ptr[75],create_tree("</td>"));}
				{$$ = create_tree("@tbldt"); connect_l_child($$, ptr[75]);}
				; 

/***********************************************************************************************************************************/

/************************************************************** MATH MODE **********************************************************/

math		:	DLR		math_content	DLR
				{$$ = create_tree("@math"); connect_l_child($$,$2);}

				|DDLR
				{ptr[81] = create_tree("<center>");} 
				math_content 	
				{connect_r_sibling(ptr[81],$3);}	
				DDLR
				{connect_r_sibling(ptr[81],create_tree("</center>"));}							
				{$$ = create_tree("@math"); connect_l_child($$,ptr[81]);}
				;

math_content1 : mstr
				{ptr[90] = create_tree(yytext);}
				math_subcontent	
				{connect_r_sibling(ptr[90],$3);}
				{$$ = create_tree("@math_content1"); connect_l_child($$,ptr[90]);}

			|	SQRT	
				{ptr[90] = create_tree("&#8730;");}
				CRLOB 	
				mstr	
				{connect_r_sibling(ptr[90],create_tree(yytext));}	
				CRLCB 	
				{$$ = create_tree("@math_content1"); connect_l_child($$,ptr[90]);}

			|	sumint		
				{$$ = create_tree("@math_content1"); connect_l_child($$,$1);}

			|	frac		
				{$$ = create_tree("@math_content1"); connect_l_child($$,$1);}




math_content :	math_content1
				math_content
				{ptr[82] = $1;}
				{connect_r_sibling(ptr[82],$2);}
				{$$ = create_tree("@math_content"); connect_l_child($$,ptr[82]);}

				
			|	math_content1
				math_content
				{ptr[82] = $1;}
				{connect_r_sibling(ptr[82],$2);}
				{$$ = create_tree("@math_content"); connect_l_child($$,ptr[82]);}

				
			|	math_content1
				math_content
				{ptr[82] = $1;}
				{connect_r_sibling(ptr[82],$2);}
				{$$ = create_tree("@math_content"); connect_l_child($$,ptr[82]);}

			|	math_content1
				math_content
				{ptr[82] = $1;}
				{connect_r_sibling(ptr[82],$2);}
				{$$ = create_tree("@math_content"); connect_l_child($$,ptr[82]);}					
				
			|	
				{$$ = create_tree("@math_content");}

				;


frac 		: 	FRAC 	CRLOB	
				{ptr[83] = create_tree("<sup>");}
				mstr 	
				{connect_r_sibling(ptr[83],create_tree(yytext));}
				CRLCB 	
				{connect_r_sibling(ptr[83],create_tree("</sup>"));}
				{connect_r_sibling(ptr[83],create_tree("&frasl;"));}
				CRLOB 	
				{connect_r_sibling(ptr[83],create_tree("<sub>"));}
				mstr 									
				{connect_r_sibling(ptr[83],create_tree(yytext));}	
				CRLCB	
				{connect_r_sibling(ptr[83],create_tree("</sub>"));}
				{$$ = create_tree("@frac"); connect_l_child($$,ptr[83]);}


sumint		:	SUM 
				{ptr[84] = create_tree("&sum;");}
				sumint_supsub
				{connect_r_sibling(ptr[84],$3);}
				{$$ = create_tree("@sumint"); connect_l_child($$,ptr[85]);}

				|INT 
				{ptr[84] = create_tree("&int;");}
				sumint_supsub
				{connect_r_sibling(ptr[84],$3);}
				{$$ = create_tree("@sumint"); connect_l_child($$,ptr[85]);}


sumint_supsub :	subenv 
				{ptr[85] = $1;}
				supenv
				{connect_r_sibling(ptr[85],$3);}
				{$$ = create_tree("@sumint_supsub"); connect_l_child($$,ptr[85]);}

				|supenv 
				{ptr[85] = $1;}
				subenv
				{connect_r_sibling(ptr[85],$3);}
				{$$ = create_tree("@sumint_supsub"); connect_l_child($$,ptr[85]);}

				|
				{$$ = create_tree("@sumint_supsub");}
				;

math_subcontent : 	supenv 
					{$$ = create_tree("@math_subcontent"); connect_l_child($$,$1);}

					|subenv 
					{$$ = create_tree("@math_subcontent"); connect_l_child($$,$1);}

					|
					{$$ = create_tree("@math_subcontent");}
					;

supenv		:	SUP	
				{ptr[86] = create_tree("<sup>");}
				supenv_content	
				{connect_r_sibling(ptr[86],$3);}
				{connect_r_sibling(ptr[86],create_tree("</sup>"));}
				{$$ = create_tree("@supenv"); connect_l_child($$,ptr[86]);}
				;

subenv		:	SUB	
				{ptr[87] = create_tree("<sub>");}
				subenv_content	
				{connect_r_sibling(ptr[87],$3);}
				{connect_r_sibling(ptr[87],create_tree("</sub>"));}
				{$$ = create_tree("@subenv"); connect_l_child($$,ptr[87]);}
				;


supenv_content	:	CRLOB	mstr
					{ptr[88] = create_tree(yytext);}			
					CRLCB
					{$$ = create_tree("@supenv_content"); connect_l_child($$,ptr[88]);}
					;

subenv_content	: 	CRLOB	mstr
					{ptr[89] = create_tree(yytext);}			
					CRLCB
					{$$ = create_tree("@supenv_content"); connect_l_child($$,ptr[89]);}
					;

mstr 		: 	MSTR
				|STR 											;

/***********************************************************************************************************************************/

/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
%%

#include "lex.yy.c"

int main(int argc, char* argv[]){
	
	yyin = fopen(argv[1],"r");
	if(!yyin){
		printf("error opening input file.\n");
		perror(argv[1]);
		return -1;
	}

	outfile = fopen(argv[2],"w");
	if(!outfile){
		printf("error opening output file.\n");
		perror(argv[2]);
		return -2;
	}

	yyparse();

	print_tree(outfile,ROOT);

	return 0;

}

void yyerror(const char *s){
	printf("\nToken Mismatch Somewhere.\n");
}
