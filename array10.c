//10.	Find out frequency of each number in the array (having 10 elements).
#include<stdio.h>
int main(){
    int a[100],freq[100];
    int i,n,j,count=0;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter element: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[i]= -1;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i] != 0)
        freq[i]= count;
    }
    printf("\nfrequency of each element:\n");
    for(i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",a[i],freq[i]);
        }
    }
    return 0;
}