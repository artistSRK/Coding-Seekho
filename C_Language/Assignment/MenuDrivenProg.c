#include<stdio.h>
int main(){
    int a;
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n");
    printf("Choice: ");
    for(int i=1;i<=4;i++){
        scanf("%d",&a);
        switch(a){
            case 1:
                printf("Enter two numbers: ");
                int x,y;
                scanf("%d %d",&x,&y);   
                printf("The sum is %d.",x+y);
                break;
            case 2:
                printf("Enter two numbers:");
                scanf("%d %d",&x,&y);
                printf("The difference is %d.",x-y);
                break;
            case 3:
                printf("Enter two numbers:");
                scanf("%d%d",&x,&y);
                printf("The product is %d.",x*y);
                break;
            case 4:
                printf("Goodbye!");   
                return 0;

                
            default:
                printf("Invalid choice.");
                break;


        }
    }
    return 0;
}