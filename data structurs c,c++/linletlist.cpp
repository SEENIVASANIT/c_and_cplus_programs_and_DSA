//#include <stdio.h>
//#include <stdlib.h>
//struct lnode{
//	int data;
//	struct lnode *next;
//};
//typedef struct lnode node;
//node* head=NULL;
//void insertvalue(int a){
//	node* newNode=(node*)malloc(sizeof(node));
//	newNode -> data;
//	if(head==NULL){
//		newNode->next=NULL;
//		head=newNode;
//	}else{
//		newNode->next=head;
//		head=newNode;
//	}
//	printf("sucess");
//}
//int main(){
//	insertvalue(10);
//} 
#include <stdio.h>
#include <stdlib.h>
struct lnode{
	int data;
	struct lnode *next;
};
typedef struct lnode node;
node* head=NULL;
void insertValue(int a){
	node* newnode=(node*)malloc(sizeof(node));
	if(newnode==NULL){
		printf("null");
	}
	newnode->data=a;
	if(head==NULL){
		newnode->next=NULL;
		head=newnode;
	}else{
		newnode->next=head;
		head=newnode;
	}
	printf("data add successfully");
	
	
}
void display(){
	node* temp=head;
	if(temp==NULL)
	printf("empty");
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void deletefun(int pos){
	node* temp=head;
	node* pev;
	for(int i=0;i<pos;i++){
		pev=temp;
		temp=temp->next;
	}
	pev->next=temp->next;
	free(temp);
}
void end(int a){
	node* last=NULL;
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=a;
	if(head==NULL){
		newnode->next=newnode;
		head=newnode;
	}else{
		newnode->next=head->next;
		head->next=newnode;
		
			}
}
int main(){
	
	//insertValue(9);
	//insertValue(10);
//	insertValue(11);
///	insertValue(12);
//	insertValue(13);
//	insertValue(14);
//	display();
//	deletefun(3);
//	display();
	end(1);
	end(2);
	end(3);
	display();
}
