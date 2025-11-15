#include<stdio.h>
int main(){
    int a[2][2],b[2][3];
//for matrix a;
printf("element of first array: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix elements are:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    printf("element of second array: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("the matrix elements are:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    int c[2][3];
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                c[i][j]+= a[i][j]*b[i][j];
            }
        }
    }
    
    printf("\nresult:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
