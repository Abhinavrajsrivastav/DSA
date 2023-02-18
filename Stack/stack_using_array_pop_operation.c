#include<stdio.h>

//.....................Main Function Definition.................

int main(){
  int N=5,top;
//...............Pop and Push Function Call By Value.............
  top = push(N);
  display(N,top);
  pop(N,top);

  return 0;
}

//................Push Function Definition....................

int push(int N){
   int x,i,stack[N],choice=1;
   int top = -1;

//...............Pushing Data in Stack.........................

   printf("enter data\n");
     while(choice){

//...............Condition Of Overflow (when the stack will have no more space)............

   if(top==N-1){
     printf("over flow condition\n");
     printf("Thankyou\n");
     choice=0;
   }

//...............When the stack Have space...............................

   else{
     scanf("%d",&x);
     top++;
     stack[top]=x;
     printf("do you want to continue\n");
     scanf("%d",&choice);
   }

}
   return top;
}

void display(int N,int top){
     int stack[N],i;
     printf("Stack is\n");
     for(i=0;i<N;i++){
        printf("%d\n",stack[top]);
        top--;
     }
}

//.................Pop Function Definition......................

void pop(int N,int top){
  int choice=1,i=1,stack[N],item;

//.................Popping data from stack one by one...........

  while(choice){

//.................condition of underflow(when there is no data in stack to pop left)...............

  if(top==-1){
    printf("underflow condition\n");
    printf("thank you again\n");
    choice=0;
  }

//.................When There is data available to pop...............................................

  else{
    item=stack[top];
    top--;
    printf("%d st popped item is %d\n",i,item);
    i++;
    printf("do you want to pop again\n");
    scanf("%d",&choice);
  }
}
}
