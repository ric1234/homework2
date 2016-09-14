#include<stdio.h>
#include<string.h>
#include "hw1.h"
#include "hw1.c"
void main()
{	
	char strng[30];
	char rev;
	char reverse(char * str, int length);	//declaration of function
	printf("Enter the string:");
	gets(strng);				//takes input from user
	printf("\n");
	int len=strlen(strng);
	printf("The string is: %s \n", strng);
	printf("The length of the string is: %d \n", len);
	rev = reverse(strng, len);		//Function call
	
}

