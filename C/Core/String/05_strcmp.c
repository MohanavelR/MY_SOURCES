#include <stdio.h>
#include <string.h>
int main(){
    printf("--------------------------------------------");
    printf("\nString Function     :strcmp(str,x)");
    char str[20]={'W','e','b',' ','d','e','v','e','b','l','o','m','e','n','t','\0'};
    char x[20]={'w','e','b',' ','d','e','v','e','b','l','o','m','e','n','t'};
    printf("\nmystirng str is     :%s",str);
    printf("\nmystirng x is       :%s",x);
    printf("\nString Method Value :%d",strcmp(str,x));
    printf("\n--------------------------------------------\n");
}