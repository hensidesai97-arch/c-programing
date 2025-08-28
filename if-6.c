#include<stdio.h>
int main()
{
    int x,y,z,average;
    printf("marks of maths: ");
    scanf("%d",&x);

    printf("marks of chemistry: ");
    scanf("%d",&y);

    printf("marks of physics: ");
    scanf("%d",&z);

    average = (x + y + z)/ 3;
    printf("average %d\n",average);

    if(average>=70)
    printf("pass with distinction \n");
    
    else if(average>=60)
    printf("pass with first grade \n");

    else if(average>=50)
    printf("pass with second grade \n");

    else if(average>=35)
    printf("pass with third grade \n");
    
    else 
    printf("fail");
}