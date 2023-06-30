//#include <stdio.h>
//#include <limits.h>
//#define MAX_SIZE 20
//int arry[MAX_SIZE];
//int top=-1;
//void push(int a){
//	if(top==MAX_SIZE-1){
//		printf("stack is full");
//	}
//	
//	arry[++top]=a;
////	printf("data adde!");
//}
//int pop(){
//	if(top==-1){
//		printf("arry is emty");
//		return INT_MIN;
//}
//	return arry[top--];
//}
//int pick(){
//	if(top==-1){
//		printf("its empty");
//		return INT_MIN;
//	}
//	return arry[top];
//}
//int main(){
//	push(10);
//	push(20);
//	push(30);
//	printf("remove",pop());
//	printf("PICK",pick());
//	
//} 
//////////////efficent program////////////
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct lnode{
int data;
struct lnode* next;	
};
typedef struct lnode node;
node* head=NULL;
node* top;
void push(int a){
	node* newNode=(node*)malloc(sizeof(node));
	newNode->data=a;
	if(head==NULL){
		newNode->next=NULL;
		head=newNode;
	}else{
		newNode->next=head;
		head=newNode;
	}
}
void pop(){
	if(head==NULL){
		printf("list is empty");
	}else{
		top=head;
		printf("pop %d",head->data);
		head=head->next;
	}
	free(top);
}
void pick(){
	printf("pick %d",head->data);
}
void display(){
	node* themp=head;
	if(head==NULL){
		
	}else{
		while(themp!=NULL){
			printf("%d",themp->data);
			themp=themp->next;
		}
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	pop();
	pick();
	display();
}

