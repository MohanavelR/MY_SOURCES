#include <stdio.h>
struct student{
  char *name;
  int age;
  float per;
};
void Create_local_struct(){
    struct Mark{
        int m1;
        int m2;
        int m3;
    }s;
    s.m1=56;
    s.m2=67;
    s.m3=89;
    printf("\nLocal mark1 of object  :%d",s.m1);
    printf("\nLocal mark2 of object  :%d",s.m2);
    printf("\nLocal mark4 of object  :%d",s.m3); 
}
int main(){
    struct student o;
    o.name="Mohan";
    o.age=21;
    o.per=76.89;
    printf("-------------------------------------");
    printf("\nsize of Struct :%lu ",sizeof(o));
    printf("\nGlobal name of object :%s",o.name);
    printf("\nGlobal Age of object  :%d",o.age);
    printf("\nGlobal per of object  :%0.2f",o.per);
    printf("\n-------------------------------------");
    Create_local_struct();
    printf("\n-------------------------------------\n");

}