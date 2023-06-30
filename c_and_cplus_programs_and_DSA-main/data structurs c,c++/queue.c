//#include <stdio.h>
//#include <stdlib.h>
//#define max 10
//struct queue{
//	int arry[max];
//	int fend,rear;
//};
//typedef struct queue p;
//p* newqueue(){
//	p* newspace=(p*)malloc(sizeof(p));
//	newspace->fend=-1;
//	newspace->rear=-1;
//	return newspace;
//}
//void enqueue(p* queue,int a){
//	if(queue->rear==max-1){
//		printf("arry is full!");
//		return;
//	}else{
//		if(queue->fend==-1){
//			queue->fend=0;
//		}
//		//queue->rear++;
//		queue->arry[++queue->rear]=a;
//		printf("%d",queue->arry[queue->rear]);
//	}
//	}
//	void dequeue(p* queue){
//		if(queue->rear==-1){
//		printf("array is empty!");	
//		}
//	if(queue->fend==-1){
//		printf("array is empty!");
//		return;
//	}else{
//		
//		printf("\n%d dequeue",queue->arry[queue->fend]);
//		int i;
//		for(i=0;i<queue->rear;i++){
//			queue->arry[i]=queue->arry[i+1];
//		}
//		queue->rear--;
//		printf("%d",queue->rear);
//		//queue->arry[queue->rear];
//	}
//}	
//void pick(p* queue){
//	printf("%d",queue->arry[0]);
//}
//int main(){
//struct queue *s=newqueue();
//enqueue(s,10); 
//enqueue(s,9);
//enqueue(s,8);
//dequeue(s);
//pick(s);
//   
//}
#include <stdio.h>
#include <stdlib.h>
struct lnode{
	int data;
	struct lnode* next;
	
};
typedef struct lnode p;
p* head=NULL;

void newspace(int a){
	p* newqueue=(p*)malloc(sizeof(p));
	newqueue->data=a;
	if(head==NULL){
		newqueue->next=NULL;
		head=newqueue;
	}else{
		newqueue->next=head;
		head=newqueue;		
	}
}
dqueue(){
	p* themp=head;
	p* prives;
	if(themp==NULL){
		printf("No data!");
		return;
	}
	while(themp->next!=NULL){
		prives=themp;
		themp=themp->next;
	}
	printf("%d",themp->data);
	prives->next=NULL;
	free(themp);
	
}
int main(){
	newspace(10);
	newspace(29);
	newspace(20);
	dqueue();
	dqueue();
	dqueue();
	dqueue();
}

