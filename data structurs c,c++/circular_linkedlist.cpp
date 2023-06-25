#include <stdio.h>
#include <stdlib.h>
struct lnode{
	int data;
	struct lnode* next;
};
typedef struct lnode node;
node* last=NULL;
insertbegin(int a){
	node* newNode=(node*)malloc(sizeof(node));
	newNode->data=a;
	if(last==NULL){
		newNode->next=newNode;
		last=newNode;
	}else{
		newNode->next=last->next;
		last->next=newNode;
		printf("success");
	}
}
display(){
	if(last==NULL){
	printf("nodata");	
	}
	node* themp=last->next;
	do{
			printf("%d",themp->data);
		themp=themp->next;
	}while(themp!=last->next);
	
	
}

void deletebegin(){
	node* del;
	if(last->next==last)
	{
		del=last;
		last=NULL;
	}else{
	
	del=last->next;
	last->next=last->next->next;
}
free(del);
}	

void deleteend(){
	node *del,*temp;
	if(last->next==last)
	{
		del=last;
		last=NULL;
	}else{
	temp=last->next;
	while(temp->next!=last){
		temp=temp->next;
	}
	del=last;
	temp->next=last->next;
	last=temp;
}
free(del);
}	

int main(){
insertbegin(3);
insertbegin(4);	
insertbegin(7);	
insertbegin(9);
display();
printf("delete begin");
deletebegin();
display();
deleteend();
printf("detete end");
display();
}
