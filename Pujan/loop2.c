#include<stdio.h>
void main(){
    int a,i=1,ans;
    printf("Enter Number 0f table");
    scanf("%d",&a);
    while(i<=10){
        ans=a*i;
        printf("\n ans=%d",ans);
        i=i+1;
    }
}