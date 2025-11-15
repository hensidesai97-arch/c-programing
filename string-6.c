#include<stdio.h>
#include<string.h>
void comparestrings(const char *str1,const char *str2){
    int result = strcmp(str1,str2);
    
    if(result == 0){
        printf("both strings are same\n");
    }
    else if(result>0){
        printf("'%s' is greater than '%s'\n",str1,str2);
    }
    else{
        printf("'%s' is lower than '%s'\n",str1,str2);
    }
}



int main(){
    char str1[20]="apple";
    char str2[20]="banana";
    char str3[20]="apple";
    
    comparestrings(str1,str2);
    comparestrings(str2,str3);
    comparestrings(str3,str1);
return 0;
    
}