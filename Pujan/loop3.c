#include<stdio.h>
void main (){
    int a,b,i=1,ans=1;
    printf("Enter value number");
    scanf("%d %d",&b,&a);
    
    while(i<=a){
    ans=ans*b;
    i=i+1;
    
    }
     printf("\n ans=%d",ans);
}