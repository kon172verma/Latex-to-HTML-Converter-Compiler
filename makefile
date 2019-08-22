all:
	@flex file.l
	@bison -d file.y
	@gcc -o latextohtml.exe file.tab.c
 
