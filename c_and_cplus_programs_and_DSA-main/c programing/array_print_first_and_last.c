#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=a-1;i<j;j--,i++){
        printf("%d %d ",arr[j],arr[i]);
    }
    if(a%2!=0){
        printf("%d",arr[a/2]);
    }
    return 0;

}
//input
//3(size)
// 1
// 2
// 3
// output
// 3 1 2

