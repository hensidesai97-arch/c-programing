#include<stdio.h>
int main(){
    int n,t1=0, t2=1, next_term;
    printf("enter the number of terms for fibonacci series: ");
    scanf("%d",&n);

    printf("fibonacci series: ");

    if(n>=1){
        printf("%d\n",t2);
    }
    for (int i=2;i<=n;++i){
        next_term = t1 + t2;
        printf("%d\n",next_term);
        t1=t2;
        t2 = next_term;
    }
    printf("\n");
    return 0;
}