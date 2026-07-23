#include <stdio.h>

int main() {
   int a,i,count=0;
   printf("Enter a number to check if the number is prime or not: ");
   scanf("%d",&a);
   if(a==1 || a==0){
       printf("%d is not Prime",a);
       return 0;
   }
   else{
       count=count;
   }
   for(i=2;i<a;i++){
       if(a%i==0){
       count++;
   }
   else{
       count=count;
   }}
   if(count==0){
       printf("%d is Prime:",a);
   }
   else{
       printf("%d is not Prime",a);
       return 0;
   }
}