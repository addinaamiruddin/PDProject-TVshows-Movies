#include<stdio.h>

struct TVshows_movies
{
	char name[50];
	int age;
	int quantity;
	int code;
};


void main()
{
	struct TVshows_movies TV;
	int i;
	
	printf("*****************************************\n");
	printf("                WELCOME\n");
	printf("*****************************************\n");
	printf("             1. TV SHOWS\n");
	printf("             2. TV MOVIES\n");
	printf("*****************************************\n");
	
	printf("Enter code : ");
	scanf("%d", &TV.code);
	printf("\n");
	printf("Enter the number of members : ");
	scanf("%d", &TV.quantity);

	while(i<TV.quantity)
	{
		printf("\nMember %d\n", (i+1));
		printf("\tEnter name   : ");
		scanf("%s", &TV.name);
		printf("\tEnter age    : ");
		scanf("%d", &TV.age);
		i++;
	}
}
