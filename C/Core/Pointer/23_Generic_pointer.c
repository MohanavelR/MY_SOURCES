#include <stdio.h>
int main(){
    int a[]={34,67,89,0};
    void *p;
    p=a;
    printf("--------------------------------------");
    // printf("Void pointer value *p :%d",*p);
    printf("\n Void pointer value *(int *) p :%d",*(int *)p);


    printf("\n--------------------------------------\n");
    return 0;
}