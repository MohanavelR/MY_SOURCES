#include <stdio.h>
union Udemo{
    int a;
    char b;
}o;
struct Sdemo
{
    int a;
    char b;
};

int main(){
     printf("\n-------------------------------------");
       printf("\nsize of Int     :%lu bytes",sizeof(int)); 
       printf("\nsize of Char    :%lu bytes",sizeof(char));   
       printf("\nsize of Union   :%lu bytes",sizeof(union Udemo));  
       printf("\nsize of Struct  :%lu bytes",sizeof(struct Sdemo));
       printf("union is Member datatype in highdatatype size take");  
       o.a=90;
       printf("\nInt of object  :%d",o.a);
       printf("\nChar of object :%c",o.b);
      printf("\n-------------------------------------\n");
      return 0;
}
