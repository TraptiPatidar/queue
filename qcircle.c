#include<stdio.h>
int rear,front;
int a[5];
void enqueue(){
	int x;
	if(front==(rear+1)%5){
		printf("Queue Full\n");
	}
	else {
		printf("Enter data  ");
		scanf("%d",&x);
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
		}
		else{
			rear=(rear+1)%5;
		}
		a[rear]=x;
	}
}
void dequeue(){
	if(front==-1)
		printf("Queue Empty\n");
	else{
		printf("No Deleted=%d\n",a[front]);
		front=(front+1)%5;
	}
}
void display(){
	int i=front;
	if(front==-1)
		printf("Queue Empty\n");
	else{
		if(i<=rear){
			while(i<=rear){
				printf("%d\n",a[i]);
				i++;
			}
		}
		else{
			while(i<=4){
				printf("%d\n",a[i]);
				i++;
			}
			i=0;
			while(i<=rear){
				printf("%d\n",a[i]);
				i++;
			}
		}
	}
}
int main(){
	int choice;
	front=-1;
	rear=-1;
	char c='y';
	while(c=='y'||c=='Y'){
		printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.ISEMPTY\n5.ISFULL\nEnter your choice  ");
		scanf("%d",&choice);
		switch(choice){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
		}
		printf("Enter y or Y for continuing and n for exit  ");
		scanf(" %c",&c);
	}
	return 0;
}