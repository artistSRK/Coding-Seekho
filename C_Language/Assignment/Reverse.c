#include<stdio.h>
int main(){
    int a,temp,digit,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;
    while(temp!=0){
        digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;
    }
    printf("The reverse of %d is %d.",a,reverse);
}