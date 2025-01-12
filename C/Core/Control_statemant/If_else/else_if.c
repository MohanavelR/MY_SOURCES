#include <stdio.h>
int main(){
    printf("Enter Your value :");
    int value;
    scanf("%d",&value);
    printf("---------------------------------------------");
    if(value==0){
        printf("\nYour value is Zero..");
    }
    else if (value<0)
    {
        printf("\nYour value is negative..");
    }
    else{
         printf("\nYour value is postive..");
    }
    printf("\n-------------------------------------\n");
    return 0;

}