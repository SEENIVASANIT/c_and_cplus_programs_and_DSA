 #include<stdio.h>
 int main()
 {
 	int a,i,j;
 	printf("enter numder!");
 	scanf("%d",&a);
 	for(i=1;i<=a;i++)
 	{
 		int count=0;
 	//	if(a==1)
 	//	{
 	//		printf("its not prime number!",a);
	//	 }
	//	 else{
		 	for(j=1;j<=i;j++)
		 	{
		 		if(i%j==0)
		 		{
		 			count++;
				 }
				 
			 }
		
			 if(count==2)
			 {
			 	printf("%d it is a prime number!\n",i);
			 }
			else
			 {
			 	printf("%dnot prime number!\n",i);
			 }
		 
	 }
}
//}
