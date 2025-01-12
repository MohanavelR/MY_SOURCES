#include <stdio.h>
#include <string.h>
int main(){
    printf("--------------------------------------------");
    printf("\nString Function     :strrev(str)");
     char str[20]={'W','e','b',' ','d','e','v','e','b','l','o','m','e','n','t','\0'};
    printf("\nmystirng str is     :%s",str);
    printf("\nString Method Value :%s",strrev(str));
    printf("\n--------------------------------------------\n");
}