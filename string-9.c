#include<stdio.h>
#include<string.h>
int main(){
    char a[100]="hello";
    char b[100]=" world";

    strcat(a,b);

    printf("concatenated string: %s\n",a);

    return 0;
}