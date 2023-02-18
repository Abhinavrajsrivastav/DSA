#include<stdio.h>
#include<string.h>

struct node{
int data;
struct node *left,*right;
};

int main(){
struct node *root,*temp;
root = 0;
root = create();
temp=root;
while(temp){
    printf("%d\n",temp->data);
    temp=temp->left;
}
return 0;
}

int create(){
struct node *newnode;
int x;
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&x);

if(x==-1){
    return 0;
}

newnode->data=x;
printf("enter the left child of %d\n",x);
newnode->left=create();
printf("enter the right element of %d\n",x);
newnode->right=create();
return newnode;
};
