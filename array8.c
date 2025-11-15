//8.	Copy one array of 5 elements to another array of 10 elements skipping one element.
#include<stdio.h>
int main(){
        int a[5],b[10];
        printf("enter element of arr: ");
        for(int i=0;i<5;i++){
            scanf("%d",&a[i]);
        }

        for(int j=0;j<10;j++){
                b[j]==0;
        }
        
        for(int j=0,int i=0;i<5,j<10;j=j+2,i++){
            
             b[j]=a[i];
            
        }
        printf("element of b:");
        for(int j=0;j<10;j++){
            printf("%d",b[j]);
        }
        
}