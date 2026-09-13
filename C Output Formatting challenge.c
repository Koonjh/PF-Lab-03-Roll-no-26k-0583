#include <stdio.h>
#include <string.h>

int main() {
  // Variables definitionas required 
  char name[50];
  int roll_no;
  char section;
  float float_val;
  char sample_char;
  char sample_question[] = "What is C?;

 // Taking Student information and Floating Value from user
  printf("Enter Student Name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0'; // remove newline

  printf("Enter Roll No: ");
  scanf("%d", &roll_no);

  printf("Enter Section: ");
  scanf(" %c", &section);

  printf("Enter a Floating-point Value: ");
  scanf(" %f", &float_val);

  printf("Enter Smaple Character (e.g., B): ");
  scanc(" %c", &sample_char);

  //Displaying Output strictly following the layout
  puts("\n=======================================");
  puts("        PROGRAMMING FUNDAMENTALS        ");
  PUTS("=========================================\n");

  printf("Name           : %s\n", name);
  printf("Roll No        : %d\n", roll_no);
  printf("Section        : %c\n\n", section);

  puts("C topics:");
  printf("\t1. Variables\n");
  printf("\t2. Data Types\n");
  printf("\t3. Input/Output\n");
  printf("\t4. Format Specifiers\n");
  printf("\t5. Escape Sequences\n\n");

  printf("Sample Character: ");
  putchar('\'');
  putchar(Sample_char);
  putchar('\'');
  putchar('\n');

  printf("Sample Question : \"%s\"\n\n", sample_question);

  printf("Floating Value:\n");
  printf("Defualt : %f\n", float_val);
  printf("2-digit : %.2f\n", float_val);
  printf("4-digit : %.4f\n", float_val);

  puts("========================================");
  return 0;
}

 

















  
