#include<stdio.h>
int main()
{
    int n,i,*ptr,*ptr1;
    printf("enter the values of n\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    printf("enter the values\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    printf("the entered values are\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(ptr+i));
        printf("enter the updated value of\n");
        scanf("%d",&n);
    ptr1 = (int*)realloc(ptr,n*sizeof(int));
    printf("previous add = %d new add = %d",ptr,ptr1);
    printf("the new block data is : \n");
    for(i=0;i<n;i++)
        printf("%d\n",*(ptr+i));
    free(ptr1);
}
