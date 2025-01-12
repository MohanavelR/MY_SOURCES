#include <stdio.h>
struct Store{
   double price;
   char *name;
   char *author;
   char *modal;
   char *color;
}store;
struct Store2{
 double price;
 union{
    struct{
    char *name;
    char *author;
    }book;
    struct{
    char *modal;
    char *color;
    }cell;
 }prodect;
}store2;
int main(){
    printf("------------------------------");
    store.modal="Nokia";
    store.color="red";
    store2.price=900;
    store2.prodect.cell.modal="Nokia";
    store2.prodect.cell.color="Red";
    printf("\nSize of struct          :%lu",sizeof(store));
    printf("\nSize of struct and union:%lu",sizeof(store2));
    printf("\n------------------------------\n")  ; 
}