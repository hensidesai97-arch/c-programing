#include<stdio.h>
int main(){
    int a[5],temp;
    printf("enter value:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("order of descending: \n");
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
