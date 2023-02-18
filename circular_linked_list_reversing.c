#include<stdio.h>

//............structure declaration..............

struct node{
   int data;
   struct node *next;
   struct node *prev;
};

//...........Main function Declaration............

int main(){
   struct node *head,*newnode,*temp,*tail;
   head = 0;
   int choice=1,count=0,length;

//.........Entering data....................

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

//...........making a doubly linked list a circular linked list...................
   temp->next=head;
   head->prev=temp;

//............very important part.................................................
   tail=temp;
   temp=head;

//............printing the linked list as it is...................................

   while(count){
    printf("%d\n",temp->data);
    temp=temp->next;
    count--;
   }

//...............printing the reversed linked list...................................

   printf("the reversed list is--\n");
   temp=tail;

   while(length){
    printf("%d\n",temp->data);
    temp=temp->prev;
    length--;
   }

   return 0;
}
