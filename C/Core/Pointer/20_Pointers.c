#include <stdio.h>
int main(){
    int a=10;
    int *p=&a;
    printf("--------------------------------------");
    printf("\n int *p=&a;");
    printf("\n a value(a)                  :%d",a);
    printf("\n p pointer Value(p)          :%d",p);
    printf("\n a address(&a)               :%d",&a);
    printf("\n p pointer address(&p)       :%d",&p);
    printf("\n p pointer dereferencing(*p) :%d",*p);
    printf("\n--------------------------------------\n");
}