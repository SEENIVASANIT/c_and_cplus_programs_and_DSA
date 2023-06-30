#include <stdio.h>
int main(){
	int a,var,va,ca=0;
	printf("enter the number!");
	scanf("%d",&a);
	va=a;
	while(a!=0)
	{
		var=a%10;
		//ca=var;
		printf("%d",var);
		ca=ca*10+var;
		a=a/10;
		
}
	if(va==ca)
	{
		printf("its palindrome");
	}
}

