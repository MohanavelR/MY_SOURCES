#include <stdio.h>
#include <stdbool.h>
int main(){
printf("--------------------------------------------");
printf("\nValue is 1   :true");
printf("\nValue is 0   :false");
printf("\nRelational Operactor: AND(&&)");
printf("\n(AND)true&&true     :%d",(true&&true));
printf("\n(AND)true&&false    :%d",(true&&false));
printf("\n(AND)false&&false   :%d",(false&&false));

printf("\nRelational Operactor: OR(||)");
printf("\n(OR)true||true      :%d",(true||true));
printf("\n(OR)true||false     :%d",(true||false));
printf("\n(OR)false||false    :%d",(false||false));

printf("\nRelational Operactor: XOR(^^)");
printf("\n(OXR)true^true      :%d",(true^true));
printf("\n(OXR)true^false     :%d",(true^false));
printf("\n(OXR)false^false    :%d",(false^false));

printf("\nRelational Operactor: NOT(!)");
printf("\n(NOT)!true          :%d",(!true));
printf("\n(NOT)!false         :%d",(!false));
printf("\n--------------------------------------------\n");
}