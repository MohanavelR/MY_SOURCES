#include <stdio.h>
int main(){
    printf("-----------------------------------------");
    int a[100],n;
    printf("\nEnter the Limit : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    { 
        printf("Enter the Number :");
        scanf("%d",&a[i]);
    }
    printf("\n-----------------------------------------");
    printf("\nArrays :");
    for (int i = 0; i < n; i++)
    { 
        printf("%d,",a[i]);
    }    
      printf("\n-----------------------------------------\n");
}