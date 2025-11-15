//16.	Delete a value from a particular position within an array.
#include<stdio.h>
int main(){
    int a[50];
    int i,j,n,num;

    printf("enter number of element: ");
    scanf("%d",&n);

    printf("so array:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    printf("enter number for you have delete form this array: ");
    scanf("%d",&num);

    for(i=num;i<n;i++){
        a[i]=a[i+1];
    }

    n=n-1;

    printf("\nafter array :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}