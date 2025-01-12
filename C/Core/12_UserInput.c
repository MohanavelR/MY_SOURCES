#include <stdio.h>
int main(){
    char str[100];
    printf("-------------------------------------");
    printf("\nEnter String Value :");
    scanf("%s",str);
    printf("Your Value :%s",str);
    printf("\n-------------------------------------\n");
    printf("Method -2 ");
    char str2[100];
    printf("\nEnter String Value :");
    gets(str2);
    printf("\nYour Value :%s",str2);
    printf("\n-------------------------------------\n");
}