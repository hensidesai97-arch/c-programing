//2.	Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not.
#include<stdio.h>
int leapyear(int x){
    if(x%400==0 || (x%4==0 && x%100 != 0))
    return 1;
    else 
    return 0;
}
int main(){
    int a;
    printf("enter year: ");
    scanf("%d",&a);

    if(leapyear(a))
    printf("that year is leapyear:%d\n",a);
    else
    printf("that year is not leapyear:%d",a);
    return 0;
}