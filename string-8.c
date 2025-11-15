#include<stdio.h>
#include<string.h>
int main(){
    char a1[20]="madam";
    char a2[20];

    strcpy(a2,a1);
    strrev(a1);
    if(strcmp(a2,a1)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}