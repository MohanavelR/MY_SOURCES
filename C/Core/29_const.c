#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("-------------------------------");
    printf("\n const variable can't re-assign ");

    char a[]={'a','b','c'};
    const char *p=a;
     printf("\n-------------------------------");
    printf("\ncase :1 change value ");
    printf("\n*p value :%c",*p);
    // *p='c';// not work
    p++;// work
     printf("\n*p value :%c",*p);
     printf("\n-------------------------------");
     printf("\ncase :2  ");
     char b[]={'a','b','c'};
     char const  *p1=b;  
     printf("\n*p1 value :%c",*p1);
    // *p='c';// not work
     p1++;// work
     printf("\n*p1 value :%c",*p);
     printf("\n-------------------------------");
    //  printf("\ncase :3 change value ");
    //  printf("\n-------------------------------");
    //  printf("\ncase :4 change value ");
     printf("\n--------------------------------\n");
}