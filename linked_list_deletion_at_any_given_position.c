
#include<stdio.h>

//.............structure Declaration.................

struct node{
int data;
struct node *next;
};

//..............main declaration.....................

int main()
{

    struct node *head=0,*newnode,*temp,*prevnode,*nextnode;
    int choice = 1,count=0,location,i=1;

//..............Entering data........................

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
        count++;
    }

//..................Very Very Most Important Part...........

    temp->next=0;
    temp=head;

    printf("enter the location of which you want to delete\n");
    scanf("%d",&location);
    if(location>count)
    {
        printf("Invalid Location\n");
    }
    else{
        if(count==1)
        {
            temp->next=0;
            free(temp);
            printf("the values has been deleted\n");
        }
        else{
            if(location==1){
                head=temp->next;
                free(temp);
                temp=head;
            }
            else{
                while(i<location){
                  temp=temp->next;
                 if(i==location-1){
                  nextnode=temp->next;
              }
              if(i==location-2){
                prevnode=temp;
             }
             i++;
        }
        prevnode->next=nextnode;
        free(temp);
        temp=head;
    }
        }
    }
   while(temp!=0){
    printf("%d\n",temp->data);
    temp=temp->next;
   }
   printf("%d",count-1);
   return 0;
}
