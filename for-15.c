#include<stdio.h>
int main()
{   
     int n,i;
     float num, sum = 0,mean;
     
     printf("enter the number of values: ");
     scanf("%d",&n);

     printf("enter %d numbers: \n",n);
     for(int i=0; i<n; i++){
        printf("enter value %d: ",i+1);
        scanf("%f", &num);
        sum+= num;
     }
     mean = sum /n;

     printf("sum: %f\n",sum);
     printf("mean: %.2f\n",mean);
     return 0;
}
