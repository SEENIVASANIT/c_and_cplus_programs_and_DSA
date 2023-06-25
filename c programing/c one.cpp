#include<stdio.h>
#include<string.h>
int i;
struct st{
	int a;
	char s[20];
}st[3];
int main(){
	//printf("enter the value");
	for(i=0;i<3;i++)
	{
		puts("enter");
		scanf("%d",&st[i].a);
		puts("enter char");
		scanf("%s",&st[i].s);
	}
	for(i=0;i<3;i++)
	{ 
		printf("\t%d\n",st[i].a);
		printf("\t%s\n",st[i].s);
		
	}
	
	
	
}
