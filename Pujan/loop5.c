#include<stdio.h>
void main(){
    int i=1,n;
    printf("enter value n");
    scanf("%d",&n);

    while(i<=n){
        if(n%i==0)
        printf("\n %d",i);
        i=i+1;
    }
}