#include <stdio.h>
int main(){
    float days;
    printf("Enter Your How many days Late :");
    scanf("%f",&days);
    printf("-----------------------------------------"); 

    if(days<1){
        printf("\nGood . No fine ");
    }
    else if(days>=1 && days<=5){
        printf("\n fine Amount :%0.2f",(days*0.5));
    }
        else if(days>5 && days<=10){
        printf("\n fine Amount :%0.2f",(days*1.0));
    }
        else if(days>10 && days<30){
        printf("\n fine Amount :%0.2f",(days*5.0));
    }
    else{
        printf("\nYour Member Ship was Cancelled..");
    }
    printf("\n-----------------------------------------\n"); 

    return 0;
}