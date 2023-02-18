#include<stdio.h>

//...........Structure Data Type Declaration...............

struct node {
   int data ;
   struct node *next;
   struct node *prev;
};

//...........Main Function Declaration.....................

int main()
{
    struct node *head,*newnode,*temp;
    head = 0;
    int choice=1,count=0;

//.................Entering Data...........................

    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0){
        temp=head=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("do you want to continue say 0 or 1\n");
    scanf("%d",&choice);
    count++;
    }
    temp=head;

//................Printing The Linked List...................

    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

//................Length Of Linked List......................

    printf("%d",count);

    return 0;
}
