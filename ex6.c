/*************************************************************************
    > File Name    : ex6.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-11 09:44:33
 ************************************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){
	int distence = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed",last_name[] = "Shaw";

	printf("you are %d miles away\n",distence);
	printf("you have %f levels of power and %f level of Super_power\n",power,super_power);
	printf("I have an initial %c.\n",initial);
	printf("My name is %c %s %s.\n",first_name,initial,last_name);

    return 0;
}
