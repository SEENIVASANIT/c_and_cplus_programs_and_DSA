#include<stdio.h>
#include <string.h>
//void rev(int);
int a=0,b=1,c,x,d;
void main(){
	printf("enter lemete");
	scanf("%d",&x);
	printf("%d\n%d",a,b);
	c=a+b;
	
    while (c<x)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		//c=a+b;
		}	
	

}

	
	
	
