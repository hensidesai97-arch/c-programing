#include<stdio.h>
int main(){
    int a[10];
    printf("enter 10 value:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("so those are 4th,7th and 9th value:%d %d %d\n",a[3],a[6],a[8]);
}
