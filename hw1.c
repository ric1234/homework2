#include<stdio.h>
char reverse(char * str, int length)
{
	char revs[100];
	int var;
	if(length>100)		//string is too long
		return '1';
	else if(str=="\0")	//Null string
		return '1';
	else
		{	var= length;			//A variable used in reversing
			for(int i=0; i<length; i++)	//Code for reversing
			{
				revs[i]=str[var-1];
				var-=1;
			}
			revs[length]='\0';		//NULL character at the end
			printf("\n %s \n", revs);		//print the string
			return '0';	
		}
} 
