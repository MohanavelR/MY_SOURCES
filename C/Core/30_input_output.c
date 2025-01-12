#include <stdio.h>
int main(){
    int a;
    char c;
    char name[50];
    printf("------------------------------")  ;
    printf("\nEnter The Value :");
    scanf("%d",&a);
    printf("\nValue of a:%d",a);
    printf("\nEnter The Charactor :");
    fflush(stdin);
    c=getchar();
    putchar(c);
    printf("\nEnter The Name :");
    fflush(stdin);
    gets(name);
    puts(name);
    printf("\n------------------------------\n")  ;  
}