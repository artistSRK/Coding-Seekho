#include<stdio.h>
int main(){
    int b,p;
    long result=1;
    printf("Enter base and power: ");
    scanf("%d%d",&b,&p);
    for(int i=1;i<=p;i++){
        result*=b;
    }
    printf("Result: %ld",result);
    return 0;
}
    