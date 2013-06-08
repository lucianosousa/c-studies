#include <stdio.h>
#include <stdlib.h>

int firstScore, secondScore, average;

main (){
  printf("Type the first score:\n");
  scanf("%d", &firstScore);

  printf("Type the second score:\n");
  scanf("%d", &secondScore);

  average = (firstScore + secondScore)/2;

  printf("The average is: %d\n", average);

  return 0;
}
