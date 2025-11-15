#include<stdio.h>
#include<string.h>
int main(){
    char str[]="c language";
    int i;

    printf("characters of the string printed vartically:\n");
    for(i=0;str[i] != '\0';i++){
        printf("%c\n",str[i]);
    }
return 0;   
}