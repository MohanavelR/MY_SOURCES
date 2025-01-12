#include <stdio.h>
#include <stdlib.h>

int main(){
     int i,n;
     printf("\nEnter Limit :");
     scanf("%d",&n);
     int *ptr=(int *)calloc(n,sizeof(int));
	printf("\n-----------------------------------------");
    printf("\nCalloc -Clear Allocation");
   if(ptr==NULL){
        printf("\n Memory Not Available . ");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("\nEnter Value :");
        scanf("%d",ptr+i);
    }
    for (i=0;i<n;i++){
        printf("\nAddress :%d,ptr Dereferance Value :%d",&ptr+i,*(ptr+i));
    }
	printf("\n-----------------------------------------\n");
   return 0;
}
