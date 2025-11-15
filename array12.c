//12.	Insert a new number at the beginning of the array.
#include<stdio.h>
int main(){
    int a[5];
    int i,j,num;
    printf("enter 5 element of array: ");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the new number to insert at beginning: ");
    scanf("%d",&num);

    for(i=5;i>0;i--){
       a[i]=a[i-1]; 
    }

    a[0]=num;
    5==5+1;

    printf("\narray after insertion:\n");
    for(i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}