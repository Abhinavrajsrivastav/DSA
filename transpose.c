#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],i,j;
    printf("enter the elements of Matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    }
        printf("Transpose of given Matrix is\n");
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
        b[i][j]=a[j][i];
        printf("%d ",b[i][j]);
    }
    printf("\n");
    }
    printf("Code is Written by Abhinav Raj Srivastava\nCSME-2A\n2021B1531174");
     return 0;
}

