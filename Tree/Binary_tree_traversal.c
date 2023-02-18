

// Pre - order traversal of a binary tree...............


#include<stdio.h>
#include<string.h>

struct node{
int data;
struct node *left,*right;
};

int main(){
struct node *root;
root = 0;
root = create();
preorder(root);
return 0;
}

int create(){
struct node *newnode;
int x;
newnode = (struct node*)malloc(sizeof(struct node));
printf("[Enter 0 if you do not want to insert any value else enter the data]\n");
scanf("%d",&x);

if(x==0){
    return 0;
}

newnode->data=x;
printf("enter the left child of %d\n",x);
newnode->left=create();
printf("enter the right element of %d\n",x);
newnode->right=create();
return newnode;
};

int preorder(struct node* root){

if(root==0){
    return 0;
}
else{
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}
}

