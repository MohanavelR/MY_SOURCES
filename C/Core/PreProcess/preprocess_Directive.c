#include <stdio.h>
#define Limit 5
#define MSG "Welcome"
#define Custom_msg(a)\
printf("\n" #a "Welcome to C")
int main(){
     printf("------------------------------")  ;  
     for(int i=0;i<Limit;i++){
        printf("\nValue :%d",i);
     }
     printf("Msg :%s",MSG);
     Custom_msg("Mohan");
     printf("\nFile Name :%s ",__FILE__);
     printf("\nTime      :%s",__TIME__);
     printf("\nLine      :%d",__LINE__);
     printf("\n------------------------------\n");  
}