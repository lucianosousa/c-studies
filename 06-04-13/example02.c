#include <stdio.h>
#include <stdlib.h>

int main() {
  struct Student {
    int code;
    float exam_point[3];
    float medium;
  } John, Anna;

  John.code = 123;
  John.exam_point[0] = 7.5;
  John.exam_point[1] = 9.5;
  John.exam_point[2] = 9.0;

  John.medium = (John.exam_point[0] + John.exam_point[1] +  John.exam_point[2]) /3.0;

  Anna = John;

  printf("John code: %d\n", John.code);
  printf("John medium: %.2f\n", John.medium);

  printf("Anna code: %d\n", Anna.code);
  printf("Anna medium: %.2f\n", Anna.medium);
}

