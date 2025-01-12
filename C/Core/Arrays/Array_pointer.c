#include <stdio.h>

int main(){
       printf("--------------------------------------");
       int a[]={34,56,78,90};
       int *p;
       p=&a;
       printf("\na address         :%d",&a);
       printf("\np value           :%d",p);
       printf("\nSize of integer   :%lu",sizeof(int));
       printf("\nSize of integer a :%lu",sizeof(a));
       printf("\nLength of Arrays  :%lu",(sizeof(a)/sizeof(int)));
       printf("\np value *p++      :%d",*p++);
       printf("\np value *p++      :%d",*p++);
       printf("\np value *p++      :%d",*p++);
       printf("\np value *p++      :%d",*p++);
       printf("\n");
       for(int i=0;i<4;i++){
        printf("%d,",a[i]);
       }
       printf("\n");
        for(int i=0;i<4;i++){
        printf("%d,",p[i]);
       }
       printf("\n--------------------------------------\n");
}