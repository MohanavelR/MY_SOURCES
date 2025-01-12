#include <stdio.h>

int main(){
     printf("------------------------------\n");  
     FILE *fp;
     char c;
     fp=fopen("./Text.txt","r");
     if(fp==NULL){
        printf("\nFile Not Found..");
     }

     else{
     while(1){
        c=fgetc(fp);

        if(c==EOF){
            break;
        }
        else{
            printf("%c",c);
        }
     }   

     }
     printf("\n------------------------------\n")  ;  
}