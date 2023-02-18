#include<stdio.h>
#include<string.h>

#define N 5
int front = -1;
int rear = -1;
int queue[N];

void main(){

enqueue(2);
enqueue(-1);
enqueue(5);
enqueue(6);
enqueue(7);
enqueue(8);
show();
dequeue();
dequeue();
show();
}

void enqueue(int x){

if(front==-1&&rear==-1){
    front=rear=0;
    queue[rear]=x;
}

else if((rear+1)%N==front){
    printf("queue is empty\n");
}

else{
    rear = (rear+1)%N;
    queue[rear]=x;
}
}


void show(){
int i=0;
 if(front==-1&&rear==-1){
    printf("the queue is now empty\n");
}
else{
    printf("the queue is\n");
    while(i!=N){
        printf("%d\n",queue[rear]);
        i++;
    }
}
 }


void dequeue(){

if(front==-1&&rear==-1){
    printf("the queue is now empty\n");
}
else if(front==rear)
    {
    printf("the deleted value is %d\n",queue[rear]);
    front = rear=-1;
}
else{
    printf("the deleted element is %d\n",queue[front]);
}
}

