#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *rear,*front;
void enqueue(){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data  ");
	scanf("%d",&p->data);
	p->next=NULL;
	if(front==NULL && rear==NULL){
		rear=p;
		front=p;
	}
	else{
		rear->next=p;
		rear=p;
	}
}
void dequeue(){
	struct node *p;
	if(front==NULL)
		printf("Queue Empty\n");
	else if(front==rear){
		p=front;
		front=NULL;
		rear=NULL;
		printf("number deleted=%d\n",p->data);
		free(p);
	}
	else{
		p=front;
		front=front->next;
		free(p);
	}
}
void display(){
	struct node *p;
	if(rear==NULL)
		printf("Queue Empty\n");
	else{
		p=front;
		while(p!=NULL){
			printf("%d\n",p->data);
			p=p->next;
		}
	}
}
void isempty(){
	if(rear==NULL && front== NULL)
		printf("Queue Empty\n");
	else
		printf("Queue Not Empty");
}
int main()
{
	char c='y';
	int choice;
	rear=NULL;
	front=NULL;
	while(c=='y'||c=='Y'){
		printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.ISEMPTY\n5.ISFULL\nEnter your choice  ");
		scanf("%d",&choice);
		switch(choice){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:isempty();
		}
		printf("Enter y or Y for continuing and n for exit  ");
		scanf(" %c",&c);
	}
	return 0;
}