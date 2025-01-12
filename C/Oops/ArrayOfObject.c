#include <stdio.h>
struct student{
  char *name;
  int age;
  float per;
};
int main(){
    struct student o[2];

    o[0].name="Mohan";
    o[0].age=21;
    o[0].per=76.89;

    o[1].name="Mohanavel";
    o[1].age=22;
    o[1].per=72.89;
    printf("-------------------------------------");
    printf("\n name of object :%s",o[0].name);
    printf("\n Age of object  :%d",o[0].age);
    printf("\n per of object  :%0.2f",o[0].per);
    printf("\n-------------------------------------");
  
    printf("\n name of object :%s",o[1].name);
    printf("\n Age of object  :%d",o[1].age);
    printf("\n per of object  :%0.2f",o[1].per);
    printf("\n-------------------------------------\n");

}