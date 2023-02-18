#include<stdio.h>
struct student{
  int roll;
  char name;
};
int main{
  struct student *roll,*name;
  printf("enter your name\n");
  scanf("%s",name);
  printf("enter your roll no.\n");
  scanf("%d",roll);
  printf("%d\n %c",roll,name);
  return 0;
}
