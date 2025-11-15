//14.	Insert a new number at a last position within an array
#include<stdio.h>
int main(){
    int a[50];
    int i,j,n,num;

    printf("enter no. of element: ");
    scanf("%d",&n);

    printf("so array: ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    printf("new element of add at last: ");
    scanf("%d",&num);

    a[n]=num;
    n=n+1;

    printf("\narray after insertion:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}