//Singly linked list Insertion,Deletion.
#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int info;
		struct node*link;
	};
	struct node*start=NULL;
	void traverse()
	{
		 struct node*temp;
		 if(start==NULL)
		 	{
		 	printf("enter the list is empty\n");
		 	}
		 else
		 	{
		 	temp=start;
		 	printf("\nthe list is\n");	
		 	while(temp!=NULL)
		 	 {
		 		printf("%d-->",temp->info);
		 		temp=temp->link;
		 	 }
		 	}
	}
	void insertatbegining()
	{
		int data;
		struct node*temp;
		temp=malloc(sizeof(struct node));
		printf("enter the number to insert:\n");
		scanf("%d",&data);
		temp->info=data;
		temp->link=start;
		start=temp;
	}
	void insertatend()
	{
		int data;
		struct node*temp,*head;
		temp=malloc(sizeof(struct node));
		printf("enter the number to insert:\n");
		scanf("%d",&data);
		temp->link=0;
		temp->info=data;
		head=start;
		while(head->link!=NULL)
			{
			head=head->link;
			}
		head->link=temp;
	}
	void insertatposition()
	{
		struct node *temp,*newnode;
		int pos,data,i=1;
		newnode=malloc(sizeof(struct node));
		printf("enter the number position and number to insert:\n");
		scanf("%d%d",&data,&pos);
		temp=start;
		newnode->info=data;
		newnode->link=0;
		while(i<pos-1)
			{
				temp=temp->link;
				i++;
			}
		newnode->link=temp->link;
		temp->link=newnode;		
	}
	void deleteatbegining()
	{
		struct node *temp;
		if(start==NULL)
			{
			printf("\nList is empty\n");
			}
		else
			{
			 temp=start;
			 start=start->link;
			 free(temp);
			}
	}
	void deleteatend()
	{
		struct node *temp,*prevnode;
		if(start==NULL)
		{
			printf("\n List is empty\n");
		}
		else
		{
			temp=start;
			while(temp->link!=0)
			{
				prevnode=temp;
				temp=temp->link;
			}
			free(temp);
			prevnode->link=0;
		}
	}
	void deleteatposition()
	{
		struct node *temp,*position;
 		 int i=1,pos;
 		 if(start==NULL)
  				  printf("\nList is Empty\n");
  		 else
  			{
			    printf("Enter the position\n");
    			scanf("%d",&pos);
    			position=malloc(sizeof(struct node));
   				temp=start;
    			while(i<pos-1)
    				{
      					temp=temp->link;
     					 i++;
     				}
  				position=temp->link;
 				temp->link=position->link;
  				free(position);
  			}
	}
	void search()
	{
 		 int found=-1,key;
  		 struct node *tr=start;
  		if(start==NULL)
  			{
   				 printf("Linked list is empty\n");
  			}
  		else
 			 {
   				 printf("\nEnter the element you want:");
    				scanf("%d",&key);
    				while(tr!=NULL)
    				{
     					 if(tr->info==key)
      					{
        					found=1;
       						 break;
     					 }
      					else
      					{
        					tr=tr->link;
     					 }
  			  		}
   				 if(found==1)
    				{
      					printf("%d is present in the linked list\n",key);
   					 }
   				 else
   					 {
      					printf("%d is not present in the linked list\n",key);
      				 }
      		}
   }
 void main()
 	{
		int ch;
		while(1)
		{
		printf("\n1.TRAVERSE\n2.INSERTATBEGINING\n3.INSERTATEND\n4.INSERTATPOSITION\n5.DELETEATBEGINING\n6.DELETEATEND\n7.DELETEATPOSITION\n8.SEARCH\n9.EXIT\nENTER YOUR CHOICE\n");
		scanf("%d",&ch);
		switch(ch)
			{
				case 1:
					traverse();
					break;
				case 2:
					insertatbegining();
					break;
				case 3:
					insertatend();
					break;
				case 4:
					insertatposition();
					break;
				case 5:
					deleteatbegining();
					break;
				case 6:
					deleteatend();
					break;
				case 7:
					deleteatposition();
					break;
				case 8:
					search();
					break;
				case 9:
					exit(0);
				defaut:
					printf("enter a valid choice");
			}
		}
	}
		
		
