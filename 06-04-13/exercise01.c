/* Create a struct with some arguments:
 * -> name (50 characters maximum);
 * -> code (10 characters maximum);
 * -> function code (2 characters);
 * -> dependents quantity;
 * -> salary (float);
 *
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

  struct Employe {
    char name[50];
    char code[10];
    char function_code[2];
    int dependents_quantity;
    float salary;
  } John;

  printf("Type a employer name:\n");
  scanf("%s", John.name);

  printf("Type a employer code:\n");
  scanf("%s", John.code);

  printf("Type a employer function code:\n");
  scanf("%s", John.function_code);

  printf("Type a employer dependents quantity:\n");
  scanf("%d", &John.dependents_quantity);

  printf("Type a employer salary:\n");
  scanf("%f", &John.salary);

  printf("Employer name is: %s\n", John.name);
  printf("Employer code is: %s\n", John.code);
  printf("Employer function code is: %s\n", John.function_code);
  printf("Employer dependents quantity is: %d\n", John.dependents_quantity);
  printf("Employer salary is: %.2f\n", John.salary);
}

