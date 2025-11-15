//9.	Reverse the array of maximum 5 elements.
#include<stdio.h>
int main(){
       int a[5];
       int i;
       printf("array: ");
       for(i=0;i<5;i++){
        scanf("%d",&a[i]);
       }

    printf("reverse of array: ");
       for(i=4;i>=0;i--){
        printf("%d\t",a[i]);
       }
}