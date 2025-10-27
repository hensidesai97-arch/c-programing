#include<stdio.h>
int main(){
    int count=0,num;

    printf("enter number \n");
    scanf("%d",&num);

    if(num == 0){
        count = 1;
    }
    else{
        if(num<0){
            num = -num;
        }
    }
    while(num>0){
        num = num/10;
        count++;
    }
    printf("%d\n",count);
        
   
}