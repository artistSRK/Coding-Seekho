#include<stdio.h>
int main(){
    int a,b,max=0;
    printf("Enter Numbers of elements you want to compare: ");
    scanf("%d",&b);
    printf("Enter the numbers: ");
    scanf("%d",&a);
    for(int i=1;i<b;i++){
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
    }
    printf("The largest number is %d.",max);
    return 0;

}
