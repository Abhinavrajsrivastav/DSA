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
    int choice = 1,count=0,location,i=1;

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
        count++;
    }

//..................Very Very Most Important Part...........

    temp->next=0;
    temp=head;

//..............Entering The Inserted Value..................

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the location after which you want to store value\n");
    scanf("%d",&location);
    if(location>count){
        printf("Invalid Location\n");
    }
    else{
        while(i<location){
            temp=temp->next;
            i++;
        }
        printf("enter the value you want to store\n");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }

//..................Very Very Most Important Part...........


    temp=head;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",count+1);
    return 0;
}
