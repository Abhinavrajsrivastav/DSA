#include<stdio.h>

//...........Structure Data Type Declaration...............

struct node{
int data;
struct node *next;
struct node *prev;
};

//...........Main Function Declaration.....................

int main()
{
    struct node *head,*newnode,*temp,*back,*forward,*last;
    int count=0,choice=1,location,i=1;
    head=0;

//.................Entering Data...........................

    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0){
            temp=head=newnode;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue say 0 or 1\n");
        scanf("%d",&choice);
        count++;
    }
    temp->next=0;
    last=temp;
    temp=head;

//................Enter Value Inserting..................

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the value you want to insert\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;

//...............Enter Location Of insertion............

    printf("enter the location where you want to insert\n");
    scanf("%d",&location);

    if(location>count||location<1){
        printf("invalid Location\n");
    }
    else{
//...................Very Important Part................

    while(i<location){
        temp=temp->next;
        if(i==location-2){
            back=temp;
        }
        if(i==location-1){
            forward=temp;
        }
        i++;
    }

//.............Most Important Part---1.......................
    newnode->next=forward;
    forward->prev=newnode;

//.............Most Important Part---2.......................
    newnode->prev=back;
    back->next=newnode;

//.............Most Important Part---3.......................
    temp=head;

//................Printing The Linked List...................

    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

//................Length Of Linked List......................

    printf("length = %d",count+1);
        }
    return 0;
}
