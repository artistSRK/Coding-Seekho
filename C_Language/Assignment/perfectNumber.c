#include<stdio.h>
int main(){
    int a,temp;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;
    a=0;
    for(int i=1;i<temp;i++){
        if(temp%i==0){
            a+=i;
        }
    }
    if(a==temp){
        printf("The number is a perfect number.");
    }else{
        printf("The number is not a perfect number.");
    }
    return 0;
}