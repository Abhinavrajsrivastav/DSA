#include<stdio.h>
int main()
{
    int n,i,j,t,d;
    printf("enter the number of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])           //this program is for sorting
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
         printf("sorted elements are \n");
         for(i=0;i<n;i++)
            printf("%d ",a[i]);
         for(i=0;i<n;i++)
         {
             d=0;
             for(j=0;j<n;j++)
             if(a[i]==a[j])
             {
                d=d+1;
             }
             s=d;
             if(s==1)
                printf("element %d is not repeated\n",a[i]);
             else
                printf("element %d is repeated\n",a[i]);
         }
        return 0;
}

