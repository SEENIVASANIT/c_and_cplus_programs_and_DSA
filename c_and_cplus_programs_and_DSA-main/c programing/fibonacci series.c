#include<stdio.h>
int a=0,b=1,c,i;
void seeni(int);
int main()
{

seeni(10);
    
}
void seeni(int n)
{
	//for(i=0;i<n;i++)
	//{
	
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;
	seeni(n-1);
//}
}
