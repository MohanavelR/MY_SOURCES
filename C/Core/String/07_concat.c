#include <stdio.h>
#include <string.h>
int main(){
    printf("--------------------------------------------");
    printf("\nString Function     :strcat(str,b)");
    char str[20]={'W','e','b',' ','d','e','v','e','b','l','o','m','e','n','t','\0'};
    char b[10]={' ','i','n',' ','c','\0'};
    printf("\nmystirng str is     :%s",str);
    printf("\nstring b is         :%s",b);
    strcat(str,b);
    printf("\nString Method Value :%s",str);
    printf("\n--------------------------------------------\n");
}