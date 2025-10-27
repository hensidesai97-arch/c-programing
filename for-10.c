#include<stdio.h>
int main()
{
    int n,a=1;
    printf("enter n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
      { a= a*i;}
        printf("%d ",a);
    
}
