#include <stdio.h>

int main() {
    // Variable Declarations
   int num = 255;
   unsigned int u_num = 1000;
   float f_num = 123.4567;
   double d_num = 9876.54321;
   char ch = 'K';
   long int l_num = 1234565788L;

   printf("===========================================\n");
   printf("   DATA TYPES & FORMAT SPECIFIERS DEMO     \n");
   printf("===========================================\n\n");

   // Displaying Integer in Different Formats
   printf("--- Integer Formats (Value: %d) ---\n", num);
   printf("Decimal                   : %d\n", num);
   printf("Octal                     : %o\n", num);
   printf("Hexadecimal (Lower)       : %x\n", num);
   printf("Hexadecimal (Upper)       : %X\n\n", num);

   // Displaying Floating-point in Different Formats
   printf("--- Float Formats (Values: %f) ---\n", f_num);
   printf("Standard (%%f)           : %f\n", f_num);
   printf("Expontenial (%%e)        : %e\n", f_num);
   printf("Shortest (%%g)           : %g\n\n", f_num);

  // Displaying Other Data Types
  printf("--- Other Data Types ---\n");
  printf("Unsigned Int          : %u\n", u_num);
  printf("Double                : %lf\n", d_num);
  printf("Character             : %c\n", ch);
  printf("Long Int               : %ld\n", l_num);

  printf("=============================================\n");

  return 0; 
}
