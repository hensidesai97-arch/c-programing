//2.	Sort all the elements of a 4x4 matrix and store the result in a single-dimension array.
#include<stdio.h>
int main(){
    int a[4][4],arr[16];
    int i,j,k=0,temp;

    printf("enter element for matrix: ");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            arr[k++]=a[i][j];
        }
    }
    for(i=0;i<16-1;i++){
        for(j=i+1;j<16;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     printf("\nsorted element in 1D array: \n");
     for(i=0;i<16;i++){
        printf("%d\t",arr[i]);
     }
printf("\n");
return 0;
}