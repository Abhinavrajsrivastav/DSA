#include<stdio.h>

//..........structure Declaration..............

struct node{
  int data;
  struct node *next;
};

//..............Main Function..................

int main()
{
    struct node *newnode,*head=0,*temp,*prevnode,*nextnode,*currentnode;
    int choice =1,count=0;

//..............Entering Data..................

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
        printf("do you want to continue\n");
        scanf("%d",&choice);
        count++;
    }
    temp->next=0;

//.............Reversing List....................

    prevnode = 0;
    nextnode=currentnode=head;
    while(nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
    temp=head;

//............For Printing the reversed value......

    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",count-1);


    return 0;
}
