#include <stdio.h>
int main(){
    printf("----------------------------------");
    int a=10;
    int *p,*r;
    p=&a;
    r=p+1;
    printf("\nSize of integer a :%lu",sizeof(a));
    printf("\nP value           :%d",p);
    printf("\nR value is        :%d",r);
    printf("\n---------------------------------\n");
}