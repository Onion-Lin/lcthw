/*************************************************************************
    > File Name    : ex8.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-12 21:07:02
 ************************************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){
	int areas[] = {10,12,13,14,20};
	int *p = &areas;
	//char name = "Zed";
	//char* full_name = {'Z','e','d',' ','A','.','S','h','a','w','\0'};
	char* full_name = "Zed A. Shaw";

	printf("the size of a int %ld\n",sizeof(int));
	printf("the areas of the array is %ld\n",sizeof(areas)/sizeof(int));
	printf("%s",full_name);
	printf(",and size of a char is %ld,int* is %ld",sizeof(full_name),sizeof(p));

    return 0;
}
