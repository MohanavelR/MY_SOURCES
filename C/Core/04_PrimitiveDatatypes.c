#include <stdio.h>
#include <limits.h> // min value,max value
#include <float.h>
int main(){
    printf("\n--------------------------------------");
    printf("Integer types:-\n");
    printf("\n 'Short int' %u Bytes %d to %d",sizeof(short int),SHRT_MIN,SHRT_MAX); 
    printf("\n 'unsigned Short int' %u Bytes %d to %d",sizeof(unsigned short int),USHRT_MAX); 
    printf("\n 'unsigned  int' %u Bytes 0 to %d",sizeof(unsigned  int),UINT_MAX); 
    printf("\n 'int' %u Bytes %d to %d",sizeof(int),INT_MIN,INT_MAX); 
    printf("\n 'long int' %u Bytes %d to %d",sizeof(long int),LONG_MIN,LONG_MAX); 
    printf("\n 'unsigned long int' %u Bytes 0 to %d",sizeof(unsigned long int),ULONG_MAX); 
    printf("\n 'long long int' %u Bytes %d to %d",sizeof(long long int),LLONG_MIN,LLONG_MAX);
    printf("\n 'unsigned long long int' %u Bytes %d to %d",sizeof(unsigned long long int),ULLONG_MAX);
    
    printf("\n Charector Types :- \n");
    printf("\n 'char' %u Bytes %d to %d",sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("\n 'unsigned char' %u Bytes 0 to %d",sizeof(unsigned char),UCHAR_MAX);
    
    printf("\n Float Types :- \n");
    printf("\n 'float' %u Bytes",sizeof(float));
    printf("\n 'double' %u Bytes",sizeof(double));
    printf("\n 'long double' %u Bytes \n ",sizeof(long double));
    printf("\n--------------------------------------\n");
    return 0;

}