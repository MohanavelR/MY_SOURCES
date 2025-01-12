#include <stdio.h>

struct student{
  char *name;
  int age;
  float per;
};
int main(){
    struct student o={"Mohan",21,89.90};
    struct student *ptr=&o;

    printf("-------------------------------------");
    printf("\nsize of Struct :%lu ",sizeof(o));
    printf("\n name of object :%s",ptr->name);
    printf("\n Age of object  :%d",ptr->age);
    printf("\n per of object  :%0.2f",ptr->per);
    printf("\n name of object :%s",(*ptr).name);
    printf("\n Age of object  :%d",(*ptr).age);
    printf("\n per of object  :%0.2f",(*ptr).per);
    printf("\n-------------------------------------\n");

}