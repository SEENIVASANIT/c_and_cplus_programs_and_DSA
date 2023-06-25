#include<stdio.h>
int fact(int);
int main(){
	int a;
	printf("enter the value");
	scanf("%d",a);
	fact(a);
	
}
int fact(int x)
{
	if(x==0)
	{
		printf("enter pasiteve number!");
	}
//	return 1;
	else
	return x*fact(x-1);
	
}

