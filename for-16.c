#include<stdio.h>
int main(){
    int arr[100];
    int i,largest,smallest;

    printf("enter 100 numbers: ");
    for(i=0;i<100;i++);
    {scanf("%d",&arr[i]);}

    largest = arr[0];
    smallest = arr[0];

    for(i=1;i<100;i++)
    {
        if(arr[i]>largest){
         largest = arr[i];
        }
        if(smallest<arr[i]){
            smallest = arr[i];
        }

        printf("largest %d\n",largest);
        printf("smallest %d\n",smallest);
    }
    return 0;
}