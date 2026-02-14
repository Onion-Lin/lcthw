/*************************************************************************
    > File Name    : ex11.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-14 09:51:59
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]){
	int i=argc - 1;		//argc是当前字符串的个数，是数组下标加一，所以加法是直接做小于，但是减法需要为i的初值赋argc-1
	while (i >= 0){
		printf("argc%d :%p - %s\n",i,argv[i],argv[i]);
		i--;
	
	}

	char* states[4] = {"California"};

	#define num_of_state 4
	i = 1;
	while (i < argc){
		strcpy(states[i],argv[i]);
		//states[i] = argv[i];
		printf("states %p -  %d: %s\n",states[i],i,states[i]);
		i++;
	}
    return 0;
}
