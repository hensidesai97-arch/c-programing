#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="computer";
    char str2[20];
    strcpy(str2,str1);
    printf("%s %s",str1,str2);
    return 0;
}