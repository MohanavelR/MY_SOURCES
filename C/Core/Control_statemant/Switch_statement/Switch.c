#include <stdio.h>
int main(){
    int value;
    printf("Enter Your value : ");
    scanf("%d",&value);
    printf("----------------------------------------");
    switch (value)
    {
    case 1:
       printf("\ncase 1 Activted.. ");
        break;
    case 2:
       printf("\ncase 2 Activted.. ");
        break;
    case 3:
       printf("\ncase 3 Activted.. ");
        break;            
    case 4:
       printf("\ncase 4 Activted.. ");
        break;    
    default:

       printf("\ncase default Activted..");

        break;
    }
    printf("\n----------------------------------------\n");
    return 0;
}