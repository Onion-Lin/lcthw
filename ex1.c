/*************************************************************************
    > File Name    : ex1.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-10 09:14:48
 ************************************************************************/
#include <stdio.h>

int main(int argc, char* argv[]){
	puts("Hello world.");
	//fputs("Hello world.\n",stdout);
    fputs("Hello again",stdout);
	fputc('!',stdout);
	putchar('\n');
	return 0;
}
