#include <stdio.h>
int Factorial(int n){
   int sum=0;
   if(n<=1){
    return 1;
   }
   else{
    return n*Factorial(n-1);
   }
}
int main(){
   printf("---------------------------------");
   printf("\n Factorial 5 is :%d",Factorial(5));
   printf("\n------------------------------\n");
}