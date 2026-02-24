/*************************************************************************
    > File Name    : ex16.c
    > Author       : SuperYSL
    > Email        : 324******4@qq.com
    > Created Time : 2026-02-24 09:19:07
 ************************************************************************/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person{
	char* name;
	int age,height,weight;
} Pers;

Pers* Person_creat(char* name, int age, int height, int weight){
	Pers* who = malloc(sizeof(Pers));
	assert (who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy (Pers* who){
	assert (who != NULL);

	//free(who->name);
	free(who);
}

void Person_print(Pers* who){
	printf("name: %s\n",who->name);
	printf("\tage : %d\n",who->age);
	printf("\tHeight : %d \n",who -> height);
	printf("\tWeight: %d\n",who->weight);
}

int main(int argc, char* argv[]){
	Pers* joe = Person_creat("Joe Alex",32,64,140);
	Pers* frank = Person_creat("Frank Blank", 20, 72, 180);

	printf("Joe is at memory location %p \n",joe);
	Person_print(joe);
	printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

	// make everyone age 20 years and print them again
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);

	Person_destroy(joe);
    Person_destroy(frank);
	return 0;
}
