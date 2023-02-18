#include<stdio.h>

//.................Structure declaration..................

struct node{
     int data;
     struct node *next;
     struct node *prev;
};

//.....................Main Function.......................

int main(){
    struct node *head,*newnode,*temp;
    head=0;
    int choice=1,count=0,length;

//...................Entering the data.....................

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
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue say 0 or 1\n");
        scanf("%d",&choice);
        count++;
    }

    length=count;
//...................Making a doubly linked list a Circular Doubly linked list..................

    temp->next=head->next;
    head->next->prev=temp;
    temp=head->next;
//...................Making free memory after deletion...............

    free(head);

    head=temp;

//..................Printing the linked list.........................

    while(count-1){
        printf("%d\n",temp->data);
        temp=temp->next;
        count--;
    }

//...................printing the length of linked list...............

     printf("length = %d",length-1);
    return 0;
}
