#include <stdio.h>
int main(){
    printf("-----------------------------------------------");
        for(int i=1;i<=10;i++){

            if (i==4){
              printf("\nExecute Break..");
              break;
            }
            else{
                printf("\nRunning :%d",i);
            }
        }
        printf("\n--------------------------------------");
        for(int i=1;i<=10;i++){
          
            if (i%2==1){
              printf("\nExecute Continue..");
              continue;
            }
            else{
                printf("\nRunning :%d",i);
            }
        }
        printf("\n-------------------------------------------\n");
}