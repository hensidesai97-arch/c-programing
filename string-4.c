#include<stdio.h>
#include<string.h>
int main(){
    char a[]="comPUTEr";
    int i;

    for(i=0;a[i] != '\0';i++){
        if(a[i]>='A'&& a[i]<='Z'){
            a[i]=a[i]+32;
        }
        else if(a[i]>='a'&& a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
    return 0;
}