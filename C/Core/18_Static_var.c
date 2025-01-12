#include <stdio.h>
void StaticVar(){
    static int static_var=0;
    static_var++;
    printf("\nStatic Variable :%d",static_var);
}
void Nonstaticvar(){
    int non_static_var=0;
    non_static_var++;
    printf("\nNon Static Variable :%d",non_static_var);
}
int main(){
  printf("--------------------------------------");
  StaticVar();
  StaticVar();
  StaticVar();
  Nonstaticvar();
  Nonstaticvar();
  Nonstaticvar();
  printf("\n--------------------------------------\n");

}