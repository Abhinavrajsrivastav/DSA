#include<stdio.h>
#include<string.h>

struct node{
int data;
struct node *next;
};

void main(){
struct node *newnode;
newnode = create();
printf("%d\n",newnode);
}

int create(){
struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=111;
printf("%d\n",newnode);
return newnode;
};
