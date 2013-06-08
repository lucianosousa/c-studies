#include <stdio.h>
#include <stdlib.h>

main() {
  float salary;
  printf("Type salary:\n");
  scanf("%f", &salary);
  salary = salary > 1000 ? salary * 1.05 : salary * 1.07;
  printf("The new salary is: %.2f\n", salary);

}
