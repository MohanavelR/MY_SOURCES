#include <stdio.h>
void Swapping(int x,int y){
    int temp=*x;
    *x=*y;
    *Y=temp;
}
int main(){
    int a=10;
    int b=20;
    printf("------------------------------");
    printf("\nBefore Swap:");
    printf("\n a value is :%d",a);
    printf("\n b value is :%d",b);
    Swapping(&a,&b);
    printf("\nAfter Swap:");
    printf("\n a value is :%d",a);
    printf("\n b value is :%d",b);
    printf("\n------------------------------\n");
    return 0;
}