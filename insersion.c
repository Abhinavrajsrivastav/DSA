#include<stdio.h>
int main()
{
    int n,i,x,y,t;
    printf("enter the number of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element you want to insert\n");
    scanf("%d",&x);
    printf("enter the index in which you want to add\n");
    scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        if(i==y)
        {
            t=a[i];
            a[i]=x;
            printf("%d ",a[i]);
            printf("%d ",t);
        }
        else
            printf("%d ",a[i]);
    }
    return 0;
}
