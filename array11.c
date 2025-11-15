//11.	Shift all nos. by given n positions within an array of 10 elements either on left side or right side. Pad the remaining position with 0.
#include<stdio.h>
int main(){
    int a[10],result[10];
    int i,j,n,dir;
    
    printf("enter 10 element\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    printf("enter nos. of positions to shift: ");
    scanf("%d",&n);

    printf("enter direction (1 for right,0 for left): ");
    scanf("%d",&dir);

    for(i=0;i<10;i++){
        result[i]=0;
    }
    if(n>10){
      n=n%10; 
    }
    if(dir == 1){
        for(i=0;i<10-n;i++){
        result[i+n]=a[i];
        }
    }
    else{
        for(i=n;n<10;i++){
        result[i-n]=a[i];
        }
    }
    printf("\nArray after shifting:\n");
    for(i=0;i<10;i++){
        printf("%d\t",result[i]);
    }
    return 0;
}