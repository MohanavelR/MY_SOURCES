#include <stdio.h>

int main(){
     printf("------------------------------\n");  
     FILE *fp;

     fp=fopen("./Text.txt","w");
     if(fp==NULL){
        printf("\nFile Not Found..");
     }
     else{
        fprintf(fp,"Welcome Back C");
        fclose(fp);
     }

}   