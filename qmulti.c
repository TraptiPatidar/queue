#include<stdio.h>
int front1,rear1,front2,rear2,a[10];
void enqueue1(){
	if(rear1==4)
		printf("Queue 1 Full\n");
	else{
		if(front1==-1)
			front1++;
		rear1++;
		printf("Enter data  ");
		scanf("%d",&a[rear1]);
	}
}
void dequeue1(){
	if(front1==-1)
		printf("Queue 1 is empty\n");
	else{
		printf("Number Deleted= %d\n",a[front1]);
		if(front1==rear1){
			front1=-1;
			rear1=-1;
		}
		else{
			front1++;
		}
	}
}
void enqueue2(){
	if(rear2==9)
		printf("Queue 2 Full\n");
	else{
		if(front2==-1){
			front2=5;
			rear2=5;
		}
		else
			rear2++;
		printf("Enter data  ");
		scanf("%d",&a[rear2]);
	}
}
void dequeue2(){
	if(front2==-1)
		printf("Queue 2 is empty\n");
	else{
		printf("Number Deleted= %d\n",a[front2]);
		if(front2==rear2){
			front2=-1;
			rear2=-1;
		}
		else{
			front2++;
		}
	}
}
void display(){
	printf("ELEMENTS OF QUEUE 1 ARE\n");
	if(front1==-1)
		printf("Queue 1 Empty\n");
	else{
		for(int i=front1;i<=rear1;i++){
			printf("%d\n",a[i]);
		}
	}
	printf("ELEMENTS OF QUEUE 2 ARE\n");
	if(front2==-1)
		printf("Queue 2 Empty\n");
	else{
	for(int i=front2;i<=rear2;i++){
		printf("%d\n",a[i]);
		}
	}
}
int main(){
	int choice;
	char c='y';
	front1=-1;
	rear1=-1;
	front2=-1;
	rear2=-1;
	while(c=='y'||c=='Y'){
		printf("1.ENQUEUE IN FIRST QUEUE\n2.ENQUEUE IN SECOND QUEUE\n3.DEQUEUE FROM FIRST QUEUE\n4.DEQUEUE FROM SECOND QUEUE\n5.DISPLAY\nEnter your choice  ");
		scanf("%d",&choice);
		switch(choice){
			case 1:enqueue1();
			break;
			case 2:enqueue2();
			break;
			case 3:dequeue1();
			break;
			case 4:dequeue2();
			break;
			case 5:display();
			
		}
		printf("Enter y or Y for continuing and n for exit  ");
		scanf(" %c",&c);
	}
	return 0;
}