#include <stdio.h>

struct student{
  char *name;
  int age;
  float per;
};
int main(){
    struct student o={"Mohan",21,89.90};
    printf("-------------------------------------");
    printf("\nsize of Struct :%lu ",sizeof(o));
    printf("\n name of object :%s",o.name);
    printf("\n Age of object  :%d",o.age);
    printf("\n per of object  :%0.2f",o.per);
    printf("\n-------------------------------------\n");

}