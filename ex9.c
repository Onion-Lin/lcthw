/*************************************************************************
    > File Name    : ex9.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-14 00:18:25
 ************************************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){
    int number[4] = {0};
	char name[4] = {'a'};

	printf("nunmbers: %d %d %d %d\n",number[0],number[1],number[2],number[3]);
	printf("names: %c %c %c %c\n",name[0],name[1],name[2],name[3]);
    printf("name: %s",name);

    number[0] = 1; number[1] = 2; number[2] = 3; number[3] = 4;
    name[0] = 'Z'; name[1] = 'e'; name[2] = 'd'; name[3] = '\0';

    printf("nunmbers: %d %d %d %d\n",number[0],number[1],number[2],number[3]);
	printf("names: %c %c %c %c\n",name[0],name[1],name[2],name[3]);
    printf("name: %s",name);

    char* names = "Zed";
    printf("names: %c %c %c %c\n",names[0],names[1],names[2],names[3]);
    return 0;
}
