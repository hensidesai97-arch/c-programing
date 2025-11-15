//4.	Accept and print later on three books names using array of pointers.
#include<stdio.h>
int main(){
    char books[3][50];
    char *p[3];
    int i;

    for(i=0;i<3;i++){
        p[i]=books[i];
    }

    printf("enter names of 3 books :\n");
    for(i=0;i<3;i++){
        printf("book %d: ",i+1);
        scanf("%s",p[i]);
    }
    printf("\nyou entered:\n");
    for(i=0;i<3;i++){
        printf("book %d: %s\n",i+1,p[i]);
    }
    return 0;
}