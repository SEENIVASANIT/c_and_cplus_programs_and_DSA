#include <stdio.h>
/*
//display_the_array
int main(){
	int arry[8]={1,2,3,4,5,5,6,7};
	for(int i=0;i<8;i++){
		printf("%d",arry[i]);
			}
}
*/
//////////////////////////INSERT ARRAY///////////////////////////////////
#define MAXSIZE 10
int main(){
	int a=10;
	int *p=&a;
	int **f=*p;
	printf("%d",**f);
	
 }
