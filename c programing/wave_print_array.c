#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    //sort in des
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0,j=a-1;i<j;i++,j--){
        printf("%d %d ",arr[i],arr[j]);
    }
    if(a%2!=0){
        printf("%d",arr[a/2]);
    }
}
// input
// 5

// 1
// 2
// 3
// 4
// 5

// output
// 5 1 4 2 3