#include<stdio.h>

//.............structure Declaration.................

struct node{
int data;
struct node *next;
};

//..............main declaration.....................

int main()
{

    struct node *head=0,*newnode,*temp,*prevnode;
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

//........... ......To free the space.......................

    prevnode=temp;
    temp=head;
    while(i<count-1){
        temp=temp->next;
        i++;
    }
    temp->next=0;
    free(prevnode);

//..................To Showing the linked list..............

    temp=head;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",count-1);
    return 0;
}
