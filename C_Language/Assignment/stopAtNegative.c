#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: \n");
    for(int i=1;i<=20;i++){
        scanf("%d",&a);
        if(a<0){
            printf("The number is negative. Exiting the loop.\n");
            break;
        }
        else{
            continue;}
    }
    return 0;
}