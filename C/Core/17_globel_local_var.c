#include <stdio.h>
int global_variable=90;
void display(){
    global_variable++;
   printf("\nA :%d",global_variable);
}
int main(){
    printf("-------------------------------");
    {
        int a=10;
        printf("\n%d Local Variable You can't access Globally.",a);
    }
     printf("\n%d global Variable You can access Globally and blocks.",global_variable);
      display();
    printf("\n%d global Variable You can access Globally and blocks.",global_variable);
   
    return 0;
    printf("\n-------------------------------\n");

}
