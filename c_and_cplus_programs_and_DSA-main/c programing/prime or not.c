#include <stdio.h>
//prime number or not;
int main()
{
	int a,i,count=0;
	printf("enter the numper!");
	scanf("%d",&a);
	if(a==0 || a==1)
	{
		printf("its not prime number!");
	}
	else{
		for (i=1;i<a;i++)
		{
			if(a%i==0)
			{
				count++;
				
			}
			
		}
		if(count==2)
		{
			printf("%d its prime number!",a);
			
		}
		else{
			printf("%d its not prime number",a);
		}
	}
}
