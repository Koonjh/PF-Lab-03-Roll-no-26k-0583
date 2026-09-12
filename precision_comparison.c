#include<stdio.h>

int main() {
  float float_val = 12.3456789;
  double double_val = 12.3456789012345;

 printf("=============================================\n");
 printf("             PRECISION COMPARISON            \n");
 printf("=============================================\n\n");

 // Displaying Float Value 
 printf("Float value:\n");
 printf("Default  : %f\n", float_ val);
 printf("2 digits : %.2f\n", float_val);
 printf("4 digits : %.4f\n", float_val);
 printf("6 digits : %.6f\n\n", float_val);

 // Displaying Double Value
 printf("Double value:\n");
 printf("Default   : %lf\n", double_val);
 printf("2 digits  : %.2lf\n", double_val);
 printf("4 digits  : %.4lf\n", double_val);
 printf("6 digits  : %.6if\n", double_val);

 printf("=============================================\n");

 return 0;
}


