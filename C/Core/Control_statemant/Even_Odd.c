#include <stdio.h>
int main(){
    int num ;
    printf("Enter Your Number :");
    scanf("%d",&num);
    printf("-----------------------------------------"); 
    if(num%2==0){
        printf("\nYour Number is Even.");
    }
    else{
        printf("\nYour Number is Odd.")  ; 
    }
    printf("\n-----------------------------------------\n"); 

}