#include <stdio.h>
#include <stdlib.h>
////defin note
struct lnote{
	int data;
	struct lnote *prev;
	struct lnote *next;
};
///create head pointer
typedef struct lnote node;
node* head=NULL;
node* tail=NULL;
void insertvalue(int a){
node* newNode=(node*)malloc(sizeof(node));
if(newNode==NULL){
	printf("malloc not alagate memory!");
	return;
}
//(*newNode).data=a;
newNode -> data=a;
if(head==NULL){
	newNode -> next=NULL;
	head=newNode;
	newNode->prev=NULL;
	tail=newNode;
	
}else{
	newNode->next=head;
	head->prev=newNode;
	head=newNode;
	newNode->prev=NULL;
}

printf("successfull");
}

void display(){
	if(head==NULL){
		printf("no data");
		return;
	}
	node* themp=head;
	while(themp!=NULL){
	printf("%d",themp->data);
	themp=themp->next;	
	}
	
	
	
}

void displayrev(){
	if(tail==NULL){
		printf("no data");
		return;
	}
	node* themp=tail;
	while(tail!=NULL){
	printf("%d",themp->data);
	themp=themp->prev;	
	}
	
	
	
}

void insertatposition(int s){
	node* newNode=(node*)malloc(sizeof(node));
if(newNode==NULL){
	printf("malloc not alagate memory!");
	return;
}
int i;
newNode->data=s;
node* themp=head;
for(i=1;i<=s-1;i++){
	themp=themp->next;
}
newNode->next=themp->next;
themp->next->prev=newNode;
themp->next=newNode;
newNode->prev=themp;
printf("insert");
display();
} 
void deletedate(int pos){
	node* themp=head;
	node* prives;
	int i;
	for(i=0;i<pos;i++){
		prives=themp;
		themp=themp->next;
	}
	prives->next=themp->next;
	themp->next->prev=prives;
	printf("delete"+pos);
	display();
}
revers(){
	
	node* prev=NULL;
	node* courrnt;
	node* next;
	while(courrnt!=NULL){
		next=courrnt->next;
courrnt->next=prev;
prev=courrnt;
courrnt=next;		
	}
	printf("change position");
	head=prev;
	display();
}
main(){
	insertvalue(9);
	insertvalue(8);
	insertvalue(7);
	insertvalue(6);
	display();
	//displayrev();
	insertatposition(2);
	deletedate(2);
}
//#include <stdio.h>
//#include <stdlib.h>
//struct lnode{
//	int data;
//	struct lnode* next;
//};
//
//typedef struct lnode node;
//node* head=NULL;
//void insertbegn(int a){
//node* newNode=(node*)malloc(sizeof(node));
//if(newNode==NULL){
//	printf("No assign the data");
//}
//newNode->data=a;
//if(head==NULL){
//	newNode->next=NULL;
//	head=newNode;
//}else{
//	newNode->next=head;
//	head=newNode;
//	printf("data added");
//	
//}
//}
//display(){
//node* themp=head;
//while(themp!=NULL){
//	printf("%d",themp->data);
//	themp=themp->next;
//}
//}
//void insertpos(int pos){
//	
//node* newNode=(node*)malloc(sizeof(node));
//if(newNode==NULL){
//	printf("No assign the data");
//	newNode->data=pos;
//	node* themp=head;
//	int i;
//	for(i=0;i<pos-1;i++){
//		themp=themp->next;
//		
//	}newNode->next=themp->next;
//	themp->next=newNode;
//	display();
//	themp->next=newNode;
//	
//}
//int main(){
//  int a=5;
//while(a!=0){
//insertbegn(5);
////display();
//a--;	
//}
//display();
////insertpos(2);
////return 0;
//}

