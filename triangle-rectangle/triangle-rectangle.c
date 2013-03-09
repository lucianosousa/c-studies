#include <stdio.h>
#include <stdlib.h>

int firstNumber, secondNumber, hypotenuse;

main() {
  printf("Type the first side of the triangle rectangle:\n");
  scanf("%d", &firstNumber);

  printf("Type the second side of the triangle rectangle:\n");
  scanf("%d", &secondNumber);

  hypotenuse = firstNumber + secondNumber;

  printf("The hypotenuse value is: %d\n", hypotenuse);

  return 0;

}
