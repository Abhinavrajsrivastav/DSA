#include<stdio.h>
int main()
{
    int n,i,val,j;
    printf("enter value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("enter the element you want to delete\n");
        scanf("%d",&val);
        for(i=0;i<n;i++)
            if(a[i]==val)
               for(j=i;j<n;j++)
                   a[j]=a[j+1];
    printf("the updated array is: \n");
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
    return 0;
}
