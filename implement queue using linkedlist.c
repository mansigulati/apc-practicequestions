#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *start,*end;
void enqueue(int data)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->link=temp;
		end=temp;
	}
}


void dequeue()
{
	start=start->link;
}


void show()
{
	struct node *temp;
	temp=start;
	while(temp->link!=NULL)
	{
		printf("%d \t",temp->data);
		temp=temp->link;
	}
	printf("%d \n",temp->data);
}
int main()
{
	int data,c;
	int a=1;
	while(a==1)
	{
		printf("1 to insert in queue,2 to dequeue, 3 to display 4 to exit");
		scanf("%d",&c);
		switch(c)
		{
		
		case 1:
		{
			printf("enter data");
			scanf("%d",&data);
			enqueue(data);
			break;
		}
			
		case 2:
		{
			dequeue();
			break;
		}
		case 4:
		{
			a=0;
			break;
		}
		case 3:
		{
			show();
			break;	
		}
	
		default:
		{
			printf("enter a valid option \n");
		}	
			
	}
}
}
