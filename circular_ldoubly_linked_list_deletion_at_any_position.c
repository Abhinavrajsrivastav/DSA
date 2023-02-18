#include<stdio.h>

//.................Structure declaration..................

struct node{
   int data;
   struct node *next;
   struct node *prev;
};

//.....................Main Function.......................

int main(){

    struct node *head,*newnode,*temp,*lastnode;
    int choice=1,count=0,position,i=1,length;
    head=0;

//...................Entering the data.....................

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
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want to continue say 0 or 1\n");
        scanf("%d",&choice);
        count++;
    }

//.....................length of linked list..................

    length=count;

    lastnode=temp;
    temp=head;

//....................Deletion at any position...............

    printf("enter position of deletion\n");
    scanf("%d",&position);

//...................Finding the Targeting Node................

    while(i<position){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

//..................Converting a doubly linked list into a circular doubly link list.....................

    temp=lastnode;
    temp->next=head;
    head->prev=temp;
    temp=head;

//..................Printing the linked list.........................

    while(count-1){
        printf("%d\n",temp->data);
        temp=temp->next;
        count--;
        i++;
    }

//...................printing the length of linked list...............

    printf("length = %d",length-1);

    return 0;
}
