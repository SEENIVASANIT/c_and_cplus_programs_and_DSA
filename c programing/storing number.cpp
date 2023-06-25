 #include<stdio.h>
 int main()
 {
 	int a,sum,rev,revers,i,fact=1;
 	printf("enter the value:");
 	scanf("%d",&a);
 	while(a!=0)
 	{
 		rev=a%10;

 		for(i=1;i<=rev;i++)
 		{
 			fact=fact*i;
 			
		 }
	     	sum = sum + fact;	
 		     //(OR)
		 //printf("%d /n",rev);
 		a=a/10;
	 }
	 
	 
	 printf("%d",sum);
 }
