#include<stdio.h>
int main()
{
    int n,i,d=0;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);    //program for missing number
        for(i=0;i<n&&d==0;i++)
        {
            if(a[i]!=(i+1)){

                printf("the missing number is %d ",i+1);
                d=d+1;
            }
            else
                printf("");
        }
        return 0;
}
