#include<stdio.h>
int main()
{
    int num;
    int positivecount = 0;
    int negetivecount = 0;
    int zerocount = 0;
    int i;

    printf("enter 200 values: \n");
    for(i=0;i<200;i++){
        scanf("%d",&num);
            if(num>0){
            positivecount++;
            }
            else if(num<0){
            negetivecount++;
            }
            else
            zerocount++;
         }
         printf("positive numbers: %d\n",positivecount);
         printf("negetive numbers: %d\n",negetivecount);
         printf("zero numbers: %d\n",zerocount);

         return 0;
    }
