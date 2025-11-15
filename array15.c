//15.	Delete a value from the first position of the array.
#include<stdio.h>
int main(){
    int a[50];
    int i,j,n;
    
    printf("enter no. of element: ");
    scanf("%d",&n);

    printf("so array: ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        a[i]=a[i+1];
    }

    n=n-1;

    printf("\nafter array :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}