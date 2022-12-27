#include<stdio.h>
int main()
{
    int a[2][2][2],i,j,k,n;
    printf("enter the elements of array\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("enter the elements you want to search\n");
    scanf("%d",&n);
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                if(a[i][j][k]==n){
                    printf("Address of element %d is (%d,%d,%d)\n",n,i,j,k);
                    printf("Physical Address of element %d is (%d,%d,%d)\n",n,i+1,j+1,k+1);
                }
            }
        }
    }
    return 0;
}
