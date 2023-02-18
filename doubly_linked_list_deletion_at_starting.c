#include<stdio.h>

//...........Structure Data Type Declaration...............

struct node{
   int data;
   struct node *next;
   struct node *prev;
};

//...........Main Function Declaration.....................

int main(){
    struct node *head,*newnode,*temp,*first;
    head=0;
    int choice = 1, count=0;

//.................Entering Data...........................

    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want too continue\n");
        scanf("%d",&choice);
        count++;
    }
    temp->next=0;
    temp=head;
    first=head;

//.................Deletion of first node...................

    head->next->prev=0;
    head=head->next;
    temp=head;
    free(first);

//................Printing The Linked List...................

    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

//................Length Of Linked List......................

    printf("%d",count-1);

    return 0;
}
