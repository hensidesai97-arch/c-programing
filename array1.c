#include<stdio.h>
int main(){
    int a[5];
    printf("enter 5 value:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("that's value:\n");
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
