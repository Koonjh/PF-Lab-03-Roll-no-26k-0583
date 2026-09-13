#include <stdio.h>
#include <string.h>

int main() {
  char full_nane[100];
  char city[50];
  char university[100];
  char department[100];
  
  printf("Enter Full Name  : ");
  fgets(full_name, sizeof(full_name), stdin);
  full_name[strcspn(full_name' "\n")] ='0';

  printf("Enter City        : ");
  fgets(city, sizeof(city), stdin);
  city[strcspn(city, "\n")} = '\0';

  printf("Enter University  :  "); 
  fgets(university, sizeof(university), stdin);
  university[strcspn(university, "\n")] = '\0';

  printf("Enter Department   : ");
  fgets(department, sizeof(department), stdin);
  department[strcspn(department, "\n")] = '\0;

  puts("\n============================================");
  puts("               STUDENT PROFILE              ");
  puts("============================================\n");

  printf("Name               : %s\n", full_name);
  printf("City               : %s\n", city);
  printf("University         : %s\n", university);
  pintf("Department          : %s\n", department);

  puts("\n============================================");

  return 0;
}

 







