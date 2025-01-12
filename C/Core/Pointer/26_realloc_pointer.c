
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    printf("\nEnter the limit :");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    printf("--------------------------------------");
    printf("\n malloc-memory allocation");
    if(ptr==NULL){
        printf("\n Memory Not Available . ");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("\nEnter Value :");
        scanf("%d",ptr+i);
    }
    ptr=(int *)realloc(ptr,5*sizeof(int));
    for (i=3;i<5;i++){
        printf("\nEnter Value :");
        scanf("%d",ptr+i);
    }
    for (i=0;i<5;i++){
        printf("\nptr Dereferance Value :%d",*(ptr+i));
    }
    printf("\n--------------------------------------\n");
}