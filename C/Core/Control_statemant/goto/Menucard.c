#include <stdio.h>
#include <stdbool.h>
int main(){
 int choise,equatity,amount =0;
    repeat :
    printf("\tMenu Card :");
    printf("\n\t\t1.COFFEE        Rs.15$ :");
    printf("\n\t\t2.TEA           Rs.10$ :");
    printf("\n\t\t3.GOLD COFFEE   RS.25$ :");
    printf("\n\t\t4.MILK SHAKE    RS.50$ :");
    printf("\n\t\t5.Exit");
   

    printf("\nEnter Your Number :");
    scanf("%d",&choise);
    switch (choise){
     case 1:   
        printf("Enter Equantity :");
        scanf("%d",&equatity);
        amount+=equatity*15; 
        printf("\nYou Have Selected COFFEE");
        printf("\nYour Equatity      :%d",equatity);
        
        break;
    case 2:
        printf("Enter Equantity :");
        scanf("%d",&equatity);
        amount+=equatity*10;
        printf("\nYou Have Selected TEA"); 
        printf("\nYour Equatity      :%d",equatity);
        
        break;
    
     case 3:
        printf("Enter Equantity :");
        scanf("%d",&equatity);
        amount+=equatity*25; 
        printf("\nYou Have Selected GOLD COFFEE");
        printf("\nYour Equatity      :%d",equatity);
        
        break;
    case 4 :
        printf("Enter Equantity :");
        scanf("%d",&equatity);
        amount+=equatity*50; 
        printf("\nYou Have Selected MILK SHAKE");
        printf("\nYour Equatity      :%d",equatity);
        break;

    default :
        printf("\nInvailed Choice."); 
        break;
    }
    int i;
    printf("\nDo you Want continue press 1 :");
    scanf("%d",&i);
    if(i==1){
        goto repeat;
    }
    printf("Total Pay Amount is :%d",amount);
    printf("\n-----------------------------------------\n"); 
}