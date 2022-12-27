#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k,t=0;
    printf("enter the elements of first Matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter the elements of second Matrix\n");
    for(i=0;i<2;i++){
            for(j=0;j<2;j++)
        scanf("%d",&b[i][j]);
    }
        printf("Addition of these given Matrix is\n");
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                    t=0;
                    for(k=0;k<2;k++){
                        t=t+a[i][k]*b[k][j];
                    }
                    c[i][j]=t;
                    printf("%d ",c[i][j]);
    }
    printf("\n");

    }
     return 0;
}

