#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20];
	printf("enter str;");
	gets(a);
	strcpy(b,a);
	
	
	strrev(a);
	puts(a);
	if(strcmp(a,b)==0)
	{
		printf("its a palindrome!");
	}
	else
	{
		printf("its not palindrome!");
		
	}
	//printf("%d",strrev(a));is rong 
}
