#include <stdio.h>
void Add(){
    int a,b;
    printf("\nEnter Number a :");
    scanf("%d",&a);
    printf("Enter Number b :");
    scanf("%d",&b);
    printf("Value of a+b :%d",(a+b));
}
void NoReturnWithoutArgs(){
  int a,b;
    printf("\nEnter Number a :");
    scanf("%d",&a);
    printf("Enter Number b :");
    scanf("%d",&b);
    printf("\nValue of a+b :%d",(a+b));
}
void NoReturnWithArgs(int a,int b){// formal parameter
    printf("\nValue :%d",(a+b));
}
int ReturnWithoutAgrs(){
    int a,b;
    printf("\nEnter Number a :");
    scanf("%d",&a);
    printf("Enter Number b :");
    scanf("%d",&b);
    return a+b;
}
int ReturnWithArgs(int a,int b){
    return a+b;
}
int main(){
    printf("-----------------------------------------------");
    printf("\nNo return without arguments  :");
    NoReturnWithoutArgs();
    printf("\n---------------------------------------");
    printf("\nNo return with arguments  :");
    NoReturnWithArgs(34,56);
    printf("\n---------------------------------------");
    printf("\nreturn without arguments  :");
    printf("\nValue :%d",ReturnWithoutAgrs());
    printf("\n---------------------------------------");
    printf("\nreturn with arguments  :");
    printf("\nValue :%d",ReturnWithArgs(67,89));
    printf("\n--------------------------------------------------\n");
}