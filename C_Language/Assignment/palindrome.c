#include<stdio.h>
int main(){
    int n, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n!=0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number: %d", reversed);
    if(reversed == n){
        printf("\nThe number is a palindrome.");
    } else {
        printf("\nThe number is not a palindrome.");
    }
    return 0;
}