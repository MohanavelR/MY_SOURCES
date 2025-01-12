#include <stdio.h>

int main(){
        int a=10;
        int b=20;
        printf("--------------------------------------------");
        printf("\nValue a           :%d",a);
        printf("\nValue b           :%d",b);
        printf("\nValue a|b(AND)    :%d",(a|b));
        printf("\nValue a&b(OR)     :%d",(a&b));
        printf("\nValue a^b(XOR)    :%d",(a^b));
        printf("\nValue ~a(NOT)     :%d",(~a));
        printf("\nValue a<<2 left   :%d",(a<<2));    
        printf("\nValue a>>2 right  :%d",(a>>2));   
        printf("\n--------------------------------------------\n");  
        return 0;
}