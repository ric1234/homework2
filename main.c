#include<stdio.h>
#include<string.h>
void main()
{	
	char strng[30];
	char rev;
	char reverse(char * str, int length);	//declaration of function
	printf("Enter the string:");
	gets(strng);				//takes input from user
	printf("\n");
	int len=strlen(strng);
	//printf("The string is: %s \n", strng);
	//printf("The length of the string is: %d \n", len);
	
	rev = reverse(strng, len);
	printf("\n %c \n", rev);

}

char reverse(char * str, int length)
{
	char revs[30];
	int var;
	if(length>30)		//string is too long
		return '1';
	else if(str=="\0")	//Null string
		return '1';
	else
		{	var= length;			//A variable used in reversing
			for(int i=0; i<length; i++)	//Code for reversing (not printed)
			{
				revs[i]=str[var-1];
				var-=1;
			}
			//revs[length]="\0";		//NULL character at the end
			return '0';	
		}
} 
