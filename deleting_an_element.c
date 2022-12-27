#include<stdio.h>
int main()
{
    int n,i,x,y;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         printf("enter the element you want to delete\n");    // deletion of element in an array
    scanf("%d",&x);
    /*printf("enter the index in which you want to add\n");
    scanf("%d",&y);*/
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        printf("");
    else
        printf("%d ",a[i]);
    }
        return 0;
}
