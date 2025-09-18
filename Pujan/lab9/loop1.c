#include<stdio.h>
void main(){
    int a,i=1,sum=0;
    printf("enter value no: ");
    scanf("%d",&a);

    while(i<=a){
        if(a%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }

        i=i+1;
    }
    printf("sum=%d",sum);

}