#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;//list data part
	struct node *link;//list address part
};
struct node *start=NULL;//globally declared
	void traverse()
		{
		struct node *temp;
			if(start==NULL)
				{
					printf("THE LIST IS EMPTY");
				}
			else
				{
					temp=start;
					printf("The list is \n");
					while(temp!=NULL)
						{
							printf("%d->",temp->info);
							temp=temp->link;
						}
						
				}
		}
	void insertatbegining()
		{
			struct node *temp,*data;
			temp=malloc(sizeof(struct node));
			printf("Enter the data");
			scanf("%d",&data);
			temp->info=data;
			temp->link=start;
			start=temp;
		}
	void insertatend()
		{
			struct node *temp,*data,*head;
			temp=malloc(sizeof(struct node));
			printf("Enter the data");
			scanf("%d",&data);
			temp->info=data;
			temp->link=0;
			head=start;
			while(head->link!=NULL)
				{
					head=head->link;
				}
			head->link=temp;
				
		}
	void deleteatbeginging()
		{
			if(start==NULL)
				{
					printf("The list is empty");
				}
			else
				{
					struct node *temp;
					temp=start;
					start=start->link;
					free(temp);
				}
		}
	void deleteatend()
		{
			if(start==NULL)
				{
					printf("The list is empty");
				}
			else
				{
					struct node *temp,*prevnode;
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
	void insertatposition()
	{
		int data,pos;
		struct node *prev,*next;
		printf("Enter the data");
		scanf("%d",&data);
		printf("Enter the position to insert");
		scanf("%d",&pos);
		temp->info=data;
		temp->link=next;
		prev->link=temp;
		while(
		
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
	int choice;
 while(1)
  {
	printf("\n1:TO SEE THE LIST\n");
	printf("2:INSERT DATA AT BEGINING\n");
	printf("3:INSERT DATA AT END\n");
	printf("4:DELETE DATA FROM FRONT\n");
	printf("5:DELETE DATA FROM END\n");
	printf("6:SEARCH");
	printf("7:TO EXIT\n");
	printf("\nENTER YOUR CHOICE");
	scanf("%d",&choice);
	switch(choice)
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
				deleteatbeginging();
			break;
			case 5:
				deleteatend();
			break;
			case 6:
				search();
			break;
			case 7:
				exit(0);
			break;
			default:
				printf("You Have entered an invalid choice");
		}
  }
}
				
	
	
			
		
