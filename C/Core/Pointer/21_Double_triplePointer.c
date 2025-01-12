#include <stdio.h>
int main(){
    int  a=10;
    int  *p=&a;
    int  **q=&p;
    int  ***r=&q;
    printf("--------------------------------------");
    printf("\n int *p=&a;");
    printf("\n a value(a)                  :%d",a);
    printf("\n p pointer Value(p)          :%d",p);
    printf("\n a address(&a)               :%d",&a);
    printf("\n p pointer address(&p)       :%d",&p);
    printf("\n p pointer dereferencing(*p) :%d",*p);
    printf("\n--------------------------------------");
    printf("\nint **q;");
    printf("\nq=&p;");
    printf("\n P value(p)                  :%d",P);
    printf("\n q pointer Value(q)          :%d",q);
    printf("\n p address(&p)               :%d",&p);
    printf("\n q pointer address(&q)       :%d",&q);
    printf("\n q pointer dereferencing(**q):%d",**q);
    printf("\n--------------------------------------");
    printf("\nint ***r;");
    printf("\nr=&q;");
    printf("\n q value(q)                  :%d",q);
    printf("\n r pointer Value(r)          :%d",r);
    printf("\n q address(&q)               :%d",&q);
    printf("\n r pointer address(&r)       :%d",&r);
    printf("\n r pointer dereferencing(***r):%d",***r);
    printf("\n--------------------------------------\n");
}