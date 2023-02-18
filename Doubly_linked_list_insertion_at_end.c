#include<stdio.h>

//...........Structure Data Type Declaration...............

struct node{
  int data;
  struct node *next;
  struct node *prev;
};

//...........Main Function Declaration.....................

int main(){
struct node *head,*newnode,*temp;
int choice=1,count=0;
head = 0;

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
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("do you want to continue say 1 or 0\n");
    scanf("%d",&choice);
    count++;
}
temp->next=0;

//................Enter Value Inserting At End..........

newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the value you want to store\n");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->prev=temp;
temp->next=newnode;

temp=head;

//................Printing The Linked List...................

while(temp!=0){
    printf("%d\n",temp->data);
    temp=temp->next;
}

//................Length Of Linked List......................

printf("%d",count+1);
return 0;
}
