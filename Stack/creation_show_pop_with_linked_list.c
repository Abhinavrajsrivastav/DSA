#include<stdio.h>
#include<string.h>

struct node{
int data;
struct node *next;
};

struct node *top = 0;

void main(){
push();
push();
push();
push();
push();
push();
show();
}



void push(){
struct node *newnode;
int x;

newnode = (struct node*)malloc(sizeof(struct node));

printf("Enter the value\n");
scanf("%d",&x);

newnode->data=x;
newnode->next=top;
top=newnode;
}

void show(){
while(top){
    printf("%d\t",top->data);
    top=top->next;
}

}
