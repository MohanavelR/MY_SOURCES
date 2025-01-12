#include <stdio.h>
int main(){
    char charactor ;
    printf("Enter Your Number :");
    scanf("%c",&charactor);
    printf("-----------------------------------------"); 
    switch (charactor){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O': 
        case 'U':
           printf("\nYour '%c' is a vowel.",charactor);
           break;
        default :
                printf("\nYour '%c' is not a vowel.",charactor);
        break;

    }
    printf("\n-----------------------------------------\n"); 
    }