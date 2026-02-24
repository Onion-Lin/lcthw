/*************************************************************************
    > File Name    : ex15.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-23 22:45:29
 ************************************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){
	int ages[] = {23,42,12,89,2};
	char* names[] = {"Alan","Frank","Mary","John","Lisa"};
	int* cur_age = ages;
	char** cur_name = names;

	int count = sizeof(ages) / sizeof(int);

	for (int i = 0 ; i<count ; i++){
		printf("%s has %d years alive\n",cur_name[i],cur_age[i]);
	}
	printf("---\n");

	

	for (int i = 0; i<count ; i++){
		printf("%s is %d years old\n",*(cur_name + i),*(cur_age + i));
	}
	printf("---\n");
	
	
	//cur_name = (char**)ages;
	for (int i = count - 1; i>=0 ; i--){
		printf("%s is %d years old,its adress is %p / %p\n",cur_name[i],cur_age[i],&cur_name[i],&cur_age[i]);
	}
	printf("---\n");
    
	return 0;
}
