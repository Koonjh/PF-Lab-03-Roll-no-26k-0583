#include <stdio.h>

int main() {
  // Variables with different data types
  char name[] = "Koonjh";
  int roll_number = 583;
  char section = 'B';
  int age = 18;
  float cgpa = 3.8;
  float height = 5.80f;

  // Displaying Student Report in Table-like format
  printf("=========================================\n");
  printf("             STUDENT REPORT              \n");
  printf("=========================================\n\n");
  printf("%-15s\t%-15s\n", "Filed", "Value");
  printf("-----------------------------------------\n");
  printf("%-15s\t%-15s\n", "Name", name);
  printf("%-15s\t%-15d\n", "Roll Number", roll_number);
  printf("%-15s\t%-15c\n", "Section", section);
  printf("%-15s\t%-15d\n" ,"Age", age);
  printf("%-15s\t%-15.2f\n", "CGPA", cgpa);
  printf("%-15s\t%-15.2f\n", "Height", height);
  printf("----------------------------------------\n");

  return 0;
}

 
