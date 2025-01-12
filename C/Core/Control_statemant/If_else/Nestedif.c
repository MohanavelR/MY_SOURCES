#include <stdio.h>
int main(){
    printf("Enter Year :");
    int year;
    scanf("%d",&year);
    printf("---------------------------------------------");
    if(year%100==0){
        if(year%400==0){
              printf("\nThis is a Leap year");
        }
    }
    else{
        printf("\nThis is not a Leap year");
    }
    printf("\n---------------------------------------------\n");
}