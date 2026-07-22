#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter the operation you want to perform\n1.+\n2.-\n3.*\n4./:\n");
    scanf("%d",&c); 
    printf("Enter two Number : ");
    scanf("%d%d",&a,&b);
    
    switch(c){
        case 1:
            printf("The sum of %d and %d is : %d",a,b,a+b);
            break;
        case 2:
            printf("The difference of %d and %d is : %d",a,b,a-b);
            break;
        case 3:
            printf("The product of %d and %d is : %d",a,b,a*b);
            break;
        case 4:
        if(b==0){
            printf("Division by zero is not allowed");
        } else {
            printf("The quotient of %d and %d is : %d",a,b,a/b);
        }
        break;
        default:
            printf("Invalid operation");
        
    }
    
    return 0; 
}