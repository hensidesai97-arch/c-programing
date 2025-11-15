//19.	Search a value within an array.
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

    printf("enter the num. for search: ");
    scanf("%d",&num);

    for(i=0;i<n;i++){
        if(num==a[i]){
            printf("that element's index value is:%d",i);
            }
    }
    return 0;
}