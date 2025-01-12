#include <stdio.h>
int main(){
  int n=0;
   printf("-----------------------------------------"); 
  repeat:
   printf("\nRunning :%d",n);
   n++;
   if (n!=5){
    goto repeat;
   }
   printf("\nEnd .");
 printf("\n-----------------------------------------\n"); 
}