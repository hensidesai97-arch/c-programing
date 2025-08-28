#include<stdio.h>
int main()
{
    int a,b,c,X;
    printf("maths marks: \n");
    scanf("%d",&a);

    printf("computer marks: \n");
    scanf("%d",&b);

    printf("chemistry marks: \n");
    scanf("%d",&c);

    X = (a + b + c) / 3;
    printf("averange of three subject: %d\n",X);
    return 0;
}