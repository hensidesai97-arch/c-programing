#include<stdio.h>
int main()
{   
     int values[10];
     int sum = 0;
     float mean;

     printf("enter 10 values: ");
     for(int i=0; 1<10; i++){
        printf("enter value %d: ",i+1);
        scanf("%d", &values[i]);
        sum+= values[i];
     }
     mean = (float)sum /10;

     printf("sum of 10 numbers: %d\n",sum);
     printf("mean of 10 values: %.2f\n",mean);
     return 0;
}
