#include<stdio.h>
int rear,front,a[5];
void enqueue_from_rear_end(){
	if(front==0 && rear==4)
		printf("Queue Full");
	else{
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
		}
		else if(rear==4 && front!=0){
			for(int i=front;i<=rear;i++)
				a[i-1]=a[i];
			front++;
		}
		else{
			rear++;
		}
		printf("Enter Data  ");
		scanf("%d",&a[rear]);
	}
}
 void dequeue_from_front_end(){
	if(front==-1)
		printf("Queue Empty");
	else{
		printf("Deleted Element=%d\n",a[front] );
		if(front==rear){
			front=0;
			rear=0;
		}
		else
			front++;
	}
}
void enqueue_from_front_end(){
	if(front==0 && rear==4)
		printf("Queue Full\n");
	else{
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
		}
		else if(front==0 && rear!=4){
			for(int i=rear;i>=front;i--)
				a[i+1]=a[i];
			rear++;
		}
		else
			front--;
		printf("Enter Data  ");
		scanf("%d",&a[front]);
	}
}
void dequeue_from_rear_end(){
	if(front==-1)
		printf("Queue Empty");
	else{
		printf("Deleted Element=%d\n",a[rear] );
		if(front==rear){
			front=0;
			rear=0;
		}
		else
			rear--;
	}
}
void display(){
	if(front<=rear){
		for(int i=front;i<=rear;i++)
			printf("%d\n",a[i]);
	}
}
int main(){
	int choice;
	char c='y';
	front=-1;
	rear=-1;
	while(c=='y'||c=='Y'){
		printf("1.ENQUEUE FROM REAR END\n2.ENQUEUE FROM FRONT END\n3.DEQUEUE FROM REAR END\n4.DEQUEUE FROM FRONT END\n5.DISPLAY\nEnter your choice  ");
		scanf("%d",&choice);
		switch(choice){
			case 1:enqueue_from_rear_end();
			break;
			case 2:enqueue_from_front_end();
			break;
			case 3:dequeue_from_rear_end();
			break;
			case 4:dequeue_from_front_end();
			break;
			case 5:display();
		}
		printf("Enter y or Y for continuing and n for exit  ");
		scanf(" %c",&c);
	}
	return 0;
}