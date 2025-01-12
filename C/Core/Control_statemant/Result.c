#include <stdio.h>
int main(){
    int tamil,english,maths,science,s_science;
    float avg,total;
    char grade;
    printf("Enter Your Tamil Mark : ");
    scanf("%d",&tamil);
    printf("Enter Your English Mark : ");
    scanf("%d",&english);
    printf("Enter Your Maths Mark   : ");
    scanf("%d",&maths);
    printf("Enter Your Science Mark : ");
    scanf("%d",&science);
    printf("Enter Your Social science Mark : ");
    scanf("%d",&s_science); 
    printf("---------------------------------------------------------");
    if (tamil>=35 && english>=35 && maths>=35 && science>=35 && s_science>=35){
        printf("\nResult  :pass");
        total=tamil+english+maths+science+s_science;
        printf("\nTotal   :%0.2f",total);
        avg=total/5;
        printf("\nAvarage :%0.2f",avg);
        if(avg>=90 && avg<=100){
        printf("\nGrade   : A");
        }
               
        else if (avg>=80 && avg<90){
        printf("\nGrade   : B");
        }
                
        else if(avg>=70 && avg<80){
        printf("\nGrade   : C");
        }
                
        else if(avg>70){
        printf("\nGrade   : D");
        }
        else{
        printf("\nGrade   : E");    
        }
    }     
    else{
        printf("\nResult   : Fail");
        printf("\nGrade    : No Grade");
    }
    printf("\n------------------------------------------------\n");
    return 0;
    }