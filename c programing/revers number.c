 #include<stdio.h>
 int main()
 {
 	int a,rev,revers;
 	printf("entre tha value!");
 	scanf("%d",&a);
 	while(a!=0)
 	{
 		rev=a%10;
 		//revers=revers*10+rev;
 		printf("%d",&rev);
 		     //(OR)
		 //printf("%d",revers);
 		a=a/10;
	 }
	 //printf("%d",revers);
 }
