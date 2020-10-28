#include<stdio.h>
int a[5];
int front,rear;
void enqueue(){
	int x;
	if(rear>=4) 
		printf("Queue Full\n");
	else{
		if(front==-1)
			front++;
		printf("Enter Data  ");
		scanf("%d",&x);
		rear++;
		a[rear]=x;
	}
}
void dequeue(){
	if(front==-1)
		printf("Queue empty\n");
	else{
		printf("Number Deleted= %d\n",a[front]);
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front++;
		}
	}
}
void display(){
	if(front==-1)
		printf("Queue Empty\n");
	for(int i=front;i<=rear;i++){
		printf("%d\n",a[i]);
	}
}
void isempty(){
	if(front==-1)
		printf("Queue Empty\n");
}
void isfull(){
	if(rear==4)
		printf("Queue Full\n");
}
int main(){
	int choice;
	char c='y';
	front=-1;
	rear=-1;
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
			break;
			case 5:isfull();
		}
		printf("Enter y or Y for continuing and n for exit  ");
		scanf(" %c",&c);
	}
	return 0;
}