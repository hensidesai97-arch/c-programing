#include<stdio.h>
int main(){
    int n[5],a[5]={1,2,3,4,5},b[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
            n[i]=a[i]+b[i];
    }
     int c[5];
     for(int i=0;i<5;i++){
         c[i]=n[i];
         printf("result: %d\n",c[i]);
     }

}
