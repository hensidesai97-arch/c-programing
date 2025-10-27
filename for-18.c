#include<stdio.h>
int main()
{
    int sexcode;
    int boycount = 0, girlcount = 0;
    int i;

    printf("enter sexcode for 50 student: \n");
    for(i=0;i<50;i++){
        scanf("%d",&sexcode);
        if(sexcode == 'M' || sexcode == 'F' ){
            boycount++;
        }
        else if(sexcode == 'F' || sexcode == 'M'){
            girlcount++;
        }
        else 
        printf("invaild \n");
    }
    printf("number of boys: %d\n",boycount);
    printf("number of girls: %d\n",girlcount);
    return 0;

}