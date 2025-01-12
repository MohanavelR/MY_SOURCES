#include <stdio.h>
typedef struct student{
  char *name;
  int age;
  float per;
} student;
int main(){
    printf("---------------------------------");
    typedef int Integer;
    int a=100;
    Integer b=90;
    printf("\na Value :%d",a);
    printf("\nb Value :%d",b);
    student o;
    o.name="Mohan";
    o.age=21;
    o.per=76.89;
    printf("\n-------------------------------------");
    printf("\nsize of Struct :%lu ",sizeof(o));
    printf("\n name of object :%s",o.name);
    printf("\n Age of object  :%d",o.age);
    printf("\n per of object  :%0.2f",o.per);
    printf("\n---------------------------------\n");
}