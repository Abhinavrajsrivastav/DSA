#include<stdio.h>
int main()
{
  int a[5],i,n;
  printf("enter the elements of first array\n");
  for(i=0;i<5;i++)
        scanf("%d",&a[i]);
  printf("enter the number you want to search\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      if(a[i]==n){
        printf("Address of %d Element is %d\n",n,i);
        printf("Physical Address of %d Element is %d",n,i+1);
      }
  }
  return 0;
}
