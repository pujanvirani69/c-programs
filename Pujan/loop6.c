#include<stdio.h>
void main(){
    char i='A',j='a';
    printf("UPPER CASE");
    while(i<='Z'){
        printf("%c \n",i);
        i=i+1;

    }
    i='a';
    printf("%c",i);
    while(i<='z'){
        printf("%c \n",i);
        i=i+1;
    }
}