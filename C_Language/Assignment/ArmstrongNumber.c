#include<stdio.h>
int main(){
    int a,temp,digit,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;
    while(temp!=0){
        digit=temp%10;
        sum+=digit*digit*digit;
        temp/=10;
    }
    if(sum==a){
        printf("%d is an Armstrong number.",a);
    }
    else{
        printf("%d is not an Armstrong number.",a);
    }
}