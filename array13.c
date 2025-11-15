//13.	Insert a new number at a particular position within an array.
#include<stdio.h>
int main(){
    int a[50];
    int i,j,n,num,number;

    printf("enter number of element: ");
    scanf("%d",&n);

    printf("so array:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    printf("index value for add new element: ");
    scanf("%d",&num);

    printf("enter new number for that space: ");
    scanf("%d",&number);

    for(i=n;i>num;i--){
    a[i]=a[i-1];
    }

    a[num]=number;
    n==n+1;

    printf("\narray after insertion:\n");
    for(i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
 return 0;
}