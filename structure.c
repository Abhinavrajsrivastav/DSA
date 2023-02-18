#include <stdio.h>
#include <string.h>
int main()
{
  struct student
  {
    int roll_no;
    char name[30];
    int phone_number;
  };
// ..................First way of inserting any value....................
  struct student s1 = {103,"ABHINAV",9919088};
  printf("for first student\n");
  printf("your name is %s\n",s1.name);
  printf("your roll number is %d\n",s1.roll_no);
  printf("your phone number is %d\n",s1.phone_number);
//...................second way............
  struct student s2,s3;
  printf("Second Student\n");
  s2.roll_no = 2;
  strcpy(s2.name,"Sam");
  s2.phone_number = 880826;
  printf("roll_no : %d\n", s2.roll_no);
  printf("name : %s\n", s2.name);
  printf("phone_number : %d\n", s2.phone_number);
  return 0;

}
