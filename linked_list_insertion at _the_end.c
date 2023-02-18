#include<stdio.h>

//.............structure Declaration.................

   struct node{
     int data;
     struct node *next;
    };

//..............main declaration.....................

int main()
{
    struct node *head=0,*newnode,*temp;
    int choice = 1;

//..............Entering data........................

    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        if(head==0){
            temp=head=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue  say 0 or 1\n");
        scanf("%d",&choice);
    }

//...............Most Important Part......................
    temp->next=0;

//...............Entering The inserting value.............
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the value you want to store at the end\n");
    scanf("%d",&newnode->data);

//...............Most Important Part......................
    newnode->next=0;

    temp->next=newnode;
    temp=head;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}
