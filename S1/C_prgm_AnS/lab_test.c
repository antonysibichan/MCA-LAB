#include<stdio.h>
#include<stdlib.h>
	int front=-1,rear=-1,n,a[10];
	void insert();
	void delete();
	//void search();
	void display();
	void main()
		{	
			int ch;
			printf("Enter the queue size");
			scanf("%d",&n);
		while(1)
			{
				printf("1:Insertion");
				printf("2:deletion");
				//printf("3:Search");
				printf("3:display");
				printf("4:Exit");
				printf("Enter your choice");
				scanf("%d",&ch);
					switch(ch)
						{
							case 1:
							insert();
							break;
							case 2:
							delete();
							break;
							//case 3:
							//search();
							//break;
							case 3:
							display();
							break;
							case 4:
							exit(0);
							default:
							printf("you entered an ivalid choice");
						}
			}
		}
void insert()
	{
	int x;
	if((front == 0 && rear == n-1 ) || (front == rear+1))
		{
			printf("Queue is full");
		}
	else
		{
			printf("Enter the element to insert");
			scanf("%d",&x);
			if(front==-1&&rear==-1)//queue when it is empty
				{
					front=rear=0;
				}
			else if(front=!0&&rear==n-1)//queue when deletion take placed and there is vacant space
				{
					rear=0;
				}
			else
				{
					rear=rear+1;
				}
				a[rear]=x;
		}
	}
void delete()
	{
		if(front==-1&&rear==-1)
			{
				printf("Queue is empty");
			}
		else
			{
				printf("The deleted element is:%d",a[front]);
				if(front==rear)//when there is only one element left
					{
						front=rear=-1;
					}
				else if(front==n-1)
					{
						front=0;
					}
				else
					{
						front=front+1;
					}
			}
	}
void display()
	{
		int i;
		if(front==-1&&rear==-1)
			{
				printf("Queue is empty");
			}
		else
			{
		 if(front<=rear)
				{
				for(i=front;i<=rear;i++)
					printf("%d",a[i]);
				}
		else
				{
				for(i=front;i<n;i++)
					printf("%d",a[i]);
				for(i=0;i<=rear;i++)
					printf("%d",a[i]);
				}
			}
	}    
		
						
	
		
					
				
				
			
