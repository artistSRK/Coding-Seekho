#include<stdio.h>
int main(){
   char str[100];
   int lc,uc;
   printf("Enter a string: ");
   scanf("%[^\n]",&str);
   lc=0;
   uc=0;
   for(int i=0;str[i]!='\0';i++){
         if(str[i]<=90 && str[i]>=65){
            str[i]=str[i]-32;
            uc++;
         }
         else if(str[i]>=97 && str[i]<=122){
              str[i]=str[i]+32;
              lc++;
         }
    }
    printf("Upper = %d\n",uc);
    printf("Lower = %d",lc);
    return 0;
}
               