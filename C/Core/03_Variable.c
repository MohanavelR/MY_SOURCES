#include <stdio.h>

int main(){
  short int short_int_value=56;
  unsigned un_short_int_value=89;
  unsigned int un_int_value=78;
  int int_value=34;
  long int long_int_value=456l;
  unsigned long int un_long_int_value=78778;
  long long int long_long_int_value=5676;
  unsigned long long int un_long_long_int_value=6788;
  char char_value='&';
  unsigned char un_char='5';
  float float_value=5.600000f;
  double double_value=5.78;
  long double long_double=6.7l;
  int xdecimal =0x41;
  float scientific_value=23e-2f;
  int octal_value=010;
  printf("\n--------------------------------------");
  printf("\nshort int value is              : %hd",short_int_value);
  printf("\nunsigned short int value is     : %hu",un_short_int_value);
  printf("\nint value is                    : %d",int_value);
  printf("\nunsigned int value is           : %u",un_int_value);
  printf("\nlong int value is               : %ld",long_int_value);
  printf("\nunsigned long int value is      : %lu",un_long_int_value);
  printf("\nlong long int value is          : %lld",long_long_int_value);
  printf("\nunsigned long long int value is : %llu",un_long_long_int_value);

  printf("\nchar value is                   : %c",char_value);
  printf("\nunsigned char value is          : %c",un_char);
  
  printf("\nfloat value is                  : %0.2f",float_value);
  printf("\ndouble value is                 : %0.2lf",double_value);
  printf("\nlong double value is            : %llf",long_double);
  printf("\nxa decimal value is             : %d",xdecimal);
  printf("\nscientific value is            : %f",scientific_value);
  printf("\noctal value is                 : %d\n",octal_value);
  printf("\n--------------------------------------\n");

}