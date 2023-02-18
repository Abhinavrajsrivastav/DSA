#include<stdio.h>
struct node{
int data;
struct node *next;
};
int main()
{
    struct node *head=0,*newnode,*temp;
    int choice = 1;
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
    }
    temp->next=0;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the value you want to insert at the starting\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    temp=head;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}
