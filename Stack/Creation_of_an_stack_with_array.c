//Library Includes............

#include<stdio.h>
#include<string.h>

//Macro definition of variable N and Global declaration............

#define N 5
int stack[N];
int top = -1;

void main(){

//Push Function calling...........

push();
push();
push();
push();
push();

//Show Function calling...........

show();
printf("\n");

//Pop Function calling.............

pop();
pop();

//Again Show Function Calling................

show();
printf("\n");

//Peek Function Calling..............

peek();
peek();

//Again Show Function Calling...........

show();
}


//Push Function Definition....................

void push(){
    int x;
    printf("enter the value\n");
    scanf("%d",&x);

if(top==-1){
    top=0;
    stack[top]=x;
}

else if(top>N-1){
    printf("Overflow Condition\n");
}

else{
    top++;
    stack[top]=x;
}

}


//Show Function Definition..............

void show(){
int i;
for(i=top;i>=0;i--){
    printf("%d\t",stack[i]);
}
}


//Pop Function Definition..................

void pop(){
if(top==-1){
    printf("Under Flow Condition\n");
}
else{
    printf("The Popped Value is %d\n",stack[top]);
    top--;
}
}


//Peek Function Definition.................

void peek(){
if(top==-1){
    printf("Under Flow Condition\n");
}

else{
    printf("The Peeked Value is %d\n",stack[top]);
}

}
