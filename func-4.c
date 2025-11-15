//4.	Write a function to swap two integers using call by value. Show that the original values are not changed.
#include<stdio.h>
int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("inside the function(after swap): a=%d,b=%d",x,y);
    return x,y;
}
int main(){
    int a,b;
    printf("enter number(a):");
    scanf("%d",&a);
    printf("enter number(b):");
    scanf("%d",&b);
    printf("before swaping:a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("\nafter swaping:a=%d,b=%d\n",a,b);
    return 0;
}