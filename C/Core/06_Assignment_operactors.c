#include <stdio.h>
int main(){
int a=1;
printf("--------------------------------------------");
printf("\nValue a    :%d",a);
a=1;
printf("\nValue a    :%d",a);
a+=1;
printf("\nValue a+=1 :%d",a);
a=1;
printf("\nValue a    :%d",a);
a-=1;
printf("\nValue a-=1 :%d",a);
a=1;
printf("\nValue a    :%d",a);
a/=3;
printf("\nValue a/=3 :%d",a);
a=1;
printf("\nValue a    :%d",a);
a*=2;
printf("\nValue a*=2 :%d",a);
a=1;
printf("\nValue a    :%d",a);
a%=1;
printf("\nValue a%c=1 :%d",'%',a);
printf("\n------------------------------------------------------\n");
return 0;
}