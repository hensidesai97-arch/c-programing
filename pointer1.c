//1.	Perform addition, subtraction and multiplication operations on two matrices.
#include<stdio.h>
int main(){
    int a[2][2],b[2][2],sum[2][2],diff[2][2],pro[2][2];
    int i,j;

    printf("enter element for first matrix: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter element for second matrix: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("sum of the element: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    printf("subtraction of the element: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            diff[i][j]=a[i][j]-b[i][j];
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }

    printf("multipication of the element: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            pro[i][j]=a[i][j]*b[i][j];
            printf("%d\t",pro[i][j]);
        }
        printf("\n");
    }
    return 0;
}