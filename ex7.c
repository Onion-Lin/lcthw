/*************************************************************************
    > File Name    : ex7.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-12 20:55:46
 ************************************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at imaginary bug rate of %f\n",bugs,bug_rate);

	long universe_of_defects = 10L * 10240L * 10240L * 10240L * 10240L;
	printf("The univers has %ld bugs\n",universe_of_defects);

	char nul_byte = '\0';
	int care_percentage = bugs*nul_byte;
	printf("whitch means you should care %d%%.\n",care_percentage);

    return 0;
}
