

//take something return nothing..................

#include<stdio.h>
void sum(int a,int b);
int main(){
    sum(5,7);
    return 0;
}
void sum(int a,int b){
    int sum=0;
    sum=a+b;
    printf("%d",sum);
}
