#include<stdio.h>

void main(){
    int n,ans=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        ans*=i;
    }
    printf("%d",ans);
}

int factorial(int n){
    if(n<=1){
        return 1;
    }

    return n*factorial(n-1);
}