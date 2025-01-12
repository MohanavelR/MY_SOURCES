#include <stdio.h>
#include <stdlib.h>
int * Value(){
    int a=10;
    return &a;
}
int main(){
int *ptr=NULL;
ptr=Value();
printf("Value :%d\n",*ptr);
}