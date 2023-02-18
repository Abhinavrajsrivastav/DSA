#include<stdio.h>

//...........Structure Data Type Declaration...............

struct node{
int data;
struct node *next;
struct node *prev;
};

//...........Main Function Declaration.....................

int main(){
    struct node *newnode,*head,*temp;
    int choice = 1,count =0,i=0;
    head =0;

//.................Entering Data...........................

    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
        printf("do yo want to continue\n");
        scanf("%d",&choice);
        count++;
    }

//...................Making a normal Doubly Linked list a Circular Doubly Linked List....................

    temp->next=head;
    temp=head;

//...................Insertion Any Value.................................................................

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the value\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;

    newnode->next=head;
    head->prev=newnode;
    temp=head=newnode;

//................Printing The Linked List...................

    while(count+1){
        printf("%d\t",temp->data);
        temp=temp->next;
        count--;
        i++;
    }

//................Length Of Linked List......................

    printf("%d",i);
    return 0;
}
