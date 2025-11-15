#include<stdio.h>
int main(){
    int n,a[]={500,200,100,50,20,10,5,2,1};
    int acount[9] = {0};
    printf("enter value: ");
    scanf("%d",&n);
    for(int i=0;i<9;i++){
        if(n>=a[i]){
          acount[i] = n/a[i];
          n=n-a[i];
          }
    }
    printf("\nminimum number of notes required:\n");
    for(int i=0;i<9;i++){
        if(acount[i] != 0)
        printf("%d x %d rs. notes\n",acount[i],a[i]);
        }
}
