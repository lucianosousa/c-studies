#include <stdio.h>
#include <stdlib.h>

main() {
  float scoreA, scoreB, medium;

  scanf("%f", &scoreA);

  scanf("%f", &scoreB);

  medium = (scoreA + scoreB)/2;

  if(medium >= 5.0){
    printf("approved");
  } else {
    printf("reproved");
   }
}
