#include <stdio.h>
int main(){
    int a[100][100];
    int n,m;
    printf("Enter the Rows :");
    scanf("%d",&n);
    printf("Enter The columns :");
    scanf("%d",&m);
    printf("\n------------------------------------------------");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\nEnter The Number a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n---------------------------------------------------");
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\na[%d][%d]:%d",i,j,a[i][j]);
        }
 
}
 printf("\n---------------------------------------------------\n");

}