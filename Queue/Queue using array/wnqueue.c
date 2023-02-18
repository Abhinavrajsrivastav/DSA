//..................Global Declarations...................

#define N 5
int queue[N];
int rear= -1;
int front= -1;


//..............Main Function..............................

void main(){

int i=N,x;

for(i=-1;i<N;i++){

printf("enter the data\n");
scanf("%d",&x);

enqueue(x);
}

dequeue();
peek();
show();

}


//..................To add Values in the Queue.............

void enqueue(int x){

if(rear==N-1){
   printf("\n%d can not insert =>overflow condition\n\n",x);
 }
else if(front==-1&&rear==-1){
   front=rear=0;
   queue[rear]=x;
 }
else
 {
   rear++;
   queue[rear]=x;
 }
 }


 //................Peek Function................

 void peek(){

 if(front==-1&&rear==-1){
    printf("under flow condition\n");
 }
 else
  printf("\nIt's %d\n",queue[front]);

}

 //.............For deleting the value .............


 void dequeue(){

 if(rear==-1&&rear==-1){
    printf("under flow condition\n");
 }

 else if(front==rear){
    front=rear=-1;
 }

 else{
    printf("value %d is deleted\n",queue[front]);
    front++;
 }
 }

 //................To Show to Final Queue.................

 void show(){

  int i=N-1;
  if(front==-1&&rear==-1){
    printf("under flow condition\n");
  }
  else{
    for(i=front;i<rear+1;i++)
    printf("%d\n",queue[i]);
  }
 }
