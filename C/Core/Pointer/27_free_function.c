#include <stdio.h>
#include <stdlib.h>

int * get_values(){
    int *ptr=(int *)malloc(3*sizeof(int));
        for (int i=0;i<3;i++){
        printf("\nEnter Value :");
        scanf("%d",ptr+i);
    }
    return ptr;
}
int main(){
    int n=0;
    int *ptr=get_values();

    printf("--------------------------------------");
        for (int i=0;i<5;i++){
        n+=*(ptr+i);
    }
       printf("\n Total Value :%d",n);
       free(ptr);
       ptr=NULL;
       printf("\n--------------------------------------\n");   
}