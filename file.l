%{
	#include<stdio.h>
%}

underscore [_]
string [a-zA-Z .]+
mstring [a-zA-Z0-9 .=\+\-\*\/]+
nl [\n]

%%
\\documentclass		{
						//printf("DOCCLS"); 	
						return DOCCLS;
					}

\\begin 			{
						//printf("BGN"); 	
						return BGN;
					}

\\end 				{
						//printf("END"); 	
						return END;
					}

\{ 					{
						//printf("CRLOB"); 	
						return CRLOB;
					}

\} 					{
						//printf("CRLCB"); 	
						return CRLCB;
					}

\[					{
						//printf("SQOB"); 	
						return SQOB;
					}

\]					{
						//printf("SQCB");	
						return SQCB;
					}

\( 					{
						//printf("PRNOB"); 	
						return PRNOB;
					}

\)					{
						//printf("PRNCB");	
						return PRNCB;
					}

[$][$]				{
						//printf("DDLR");	
						return DDLR;
					}

[$]					{
						//printf("DLR");		
						return DLR;
					}

document 			{	
						//printf("DOC"); 	
						return DOC;
					}

\\usepackage		{	//printf("USPKG");
						return USPKG;
					}

\\section       	{
						//printf("SEC");		
						return SEC;
					}

\\subsection		{
						//printf("SUBSEC");	
						return SUBSEC;
					}

\\par 				{
						//printf("PAR");		
						return PAR;
					}

itemize				{
						//printf("ITEMIZE"); 
						return ITEMIZE;
					}

enumerate       	{
						//printf("ENUM");	
						return ENUM;
					}

\\item 				{
						//printf("ITEM");	
						return ITEM;
					}

\\underline			{
						//printf("TUL");		
						return TUL;
					}

\\textit			{
						//printf("TIF"); 	
						return TIF;
					}

\\textbf			{
						//printf("TBF"); 	
						return TBF;
					}

tabular				{
						//printf("TBLR");
						return TBLR;
					}

\\hline				{
						//printf("HL");
						return HL;
					}

\|					{
						//printf("VB");
						return VB;
					}

&					{
						//printf("AMP");
						return AMP;
					}					

\\\\				{
						//printf("DD");
						return DD;
					}					


\\includegraphics 	{
						//printf("INCGRAP"); 
						return INCGRAP;
					}

figure				{
						//printf("FIG");		
						return FIG;
					}

\\caption 			{
						//printf("CAPTION");	
						return CAPTION;
					}

\\label				{
						//printf("LBL");
						return LBL;
					}

\\ref				{
						//printf("REF");
						return REF;
					}

{nl} 				{
						//printf("NL");		
						//return NL;
					}

[:]					{
						//printf("CLN");
						return CLN;
					}

\\sqrt				{
						//printf("SQRT");	
						return SQRT;
					}

\\sum				{
						//printf("SUM");		
						return SUM;
					}

\\int 				{
						//printf("INT");		
						return INT;
					}

\\frac				{
						//printf("FRAC");	
						return FRAC;
					}

\^					{
						//printf("SUP");		
						return SUP;
					}

{underscore}		{
						//printf("SUB");		
						return SUB;
					}

{string}			{
						//printf("STR");		
						return STR;
					}

{mstring}			{
						//printf("MSTR");
						return MSTR;
					}

%%

int yywrap(){
	return 1;
}

/*
int main(){
	yyin = fopen("file.txt","r");
	if(!yyin){
		//printf("error opening input file.");
		perror("file.txt");
		return 1;
	}
	while(yylex())
		//printf("\n");
	return 0;
}
*/