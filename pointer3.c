//3.	Print the largest and smallest numbers from a 3x3 matrix using pointer.
#include<stdio.h>
int main(){
    int a[3][3];
    int min, max;
    int i,j,*p;

    printf("enter element for matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    p=&a[i][j];
    min=max=*p;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("largest element:%d\n",max);
    printf("smallest element:%d\n",min);
}