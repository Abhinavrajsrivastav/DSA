#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Reverse of array\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
