#include <stdio.h>

int main(){
     printf("------------------------------\n");  
     FILE *fp;
     char c;
     fp=fopen("./Text.txt","a");
     if(fp==NULL){
        printf("\nFile Not Found..");
     }
     else{
         fprintf(fp," Programing\n");
        fclose(fp);
     }
}  