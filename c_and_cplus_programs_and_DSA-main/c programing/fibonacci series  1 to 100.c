#include<stdio.h>
#include <string.h>

int a=0,b=1,c,x,d;
void main(){
	printf("enter lemete");
	scanf("%d",&x);
	printf("%d %d",a,b);
	c=a+b;
	
    while (c<=x)
	{
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
		}	
	
	
}

	
	
	
