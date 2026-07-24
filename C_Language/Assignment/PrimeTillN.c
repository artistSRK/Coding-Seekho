#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n); 
    for(int i=2;i<=n;i++){
        for(int j=2;j<=i;j++){
        if(i!=j && i%j==0){
            break;
        }
        else if(i==j){
            printf("%d ",i);
        }
        }
}}
  