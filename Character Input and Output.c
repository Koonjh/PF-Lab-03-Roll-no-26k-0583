#include <stdio.h>

int main() {
  char ch1, ch2, ch3;
  // Taking three characters one by one using getchar()
  printf("Enter first character : "):
  ch1 =getchar();
  getchar(); // Clear newline buffer

  printf("Enter second character: ");
  ch2 = getchar();
  getchar(); // Clear newline buffer

  printf("Enter third character: ");
  ch3 = getchar();
  // Displaying characters using putchar()
  printf("\n-------------------------------------------\n");
  printf("Characters Entered:\n");

  printf("Character 1  : ");
  putchar(ch1);
  putchar('\n');

  printf("Character 2  : ");
  putchar(ch2);
  putchar('\n');

 printf("Character 3  : ");
 putchar(ch3);
 putchar('\n');
 printf("-----------------------------------------------\n");

 return 0;
}


