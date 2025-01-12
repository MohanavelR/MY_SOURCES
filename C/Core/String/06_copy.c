#include <stdio.h>
#include <string.h>
int main(){
    printf("--------------------------------------------");
    printf("\nString Function     :strcpy(b,str)");
   char str[20]={'W','e','b',' ','d','e','v','e','b','l','o','m','e','n','t','\0'};
    char b[20];
    printf("\nmystirng str is     :%s",str);
    printf("\nString Method Value :%s",strcpy(b,str));
    printf("\nstring b is         :%s",b);
    printf("\n--------------------------------------------\n");
}