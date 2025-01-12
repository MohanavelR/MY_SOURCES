#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a Value :");
    scanf("%d",&a);
    printf("Enter b Value :");
    scanf("%d",&b);
   printf("\n--------------------------------------");
    printf("\na value :%d",a);
    printf("\nb value :%d",b);
    printf("\nArithamatic Operaction(a+b)     :%d",(a+b));
    printf("\nArithamatic Operaction(a-b)     :%d",(a-b));
    printf("\nArithamatic Operaction(a/b)     :%0.2f",((float)a/(float)b));
    printf("\nArithamatic Operaction(a%cb)     :%d",'%',(a+b));
    printf("\nArithamatic Operaction(a*b)     :%d\n",(a*b));
    printf("\n--------------------------------------\n");
    return 0;
}