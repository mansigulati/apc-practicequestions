#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *start,*end;
void push(int data)
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
		temp->link=start;
		start=temp;
	}
}

void check()
{
 struct node *temp;
   // temp=(struct node*)malloc(sizeof(struct node));
    temp=start;
    struct node *temp1;
   // temp1=(struct node*)malloc(sizeof(struct node));
    struct node *temp2;
    //temp2=(struct node*)malloc(sizeof(struct node));
    //temp1=start->next;
    while(temp!=NULL)
    {
    temp1=temp->link;
    while(temp1!=NULL)
    {
        
        if(temp->data==temp1->data)
        {
            if(temp->link==temp1)
            {
                temp->link=temp1->link;
                break;
            }
            else
            temp2->link=temp1->link;
           
            temp1=temp1->link;
        }
        else
        {
            temp2=temp1;
            temp1=temp1->link;
        }
    }
    temp=temp->link;
    }
}

void pop()
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
		printf("1 to push, 2 to remove dublicate, 3 to display 4 to exit");
		scanf("%d",&c);
		switch(c)
		{
		
		case 1:
		{
			printf("enter data");
			scanf("%d",&data);
			push(data);
			break;
		}
			
		case 2:
		{
			check();
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
