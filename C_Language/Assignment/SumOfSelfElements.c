#include <stdio.h>
int main(){
    int a,s=0,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        s=s+b;
        a=a/10;
    }
    printf("Sum of digits: %d", s);
    return 0;
}