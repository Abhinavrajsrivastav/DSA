#include<stdio.h>
int main()
{
    int n,i,*ptr;
    printf("enter the no. of values\n");
    scanf("%d",&n);
     ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the values\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    printf("the entered values are\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(ptr+i));
    free(ptr);
    ptr = (int*)calloc(n,sizeof(int));
     printf("Enter the values\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    printf("the entered values are\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(ptr+i));
    free(ptr);
}
