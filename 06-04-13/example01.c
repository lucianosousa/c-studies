#include <stdio.h>
#include <stdlib.h>

int main() {
  struct Student {
    int code;
    float exam_point[3];
    float medium;
  };

  struct Student John;

  John.code = 123;
  John.exam_point[0] = 7.5;
  John.exam_point[1] = 9.5;
  John.exam_point[2] = 9.0;

  John.medium = (John.exam_point[0] + John.exam_point[1] +  John.exam_point[2]) /3.0;

  printf("Student code: %d\n", John.code);
  printf("Student medium: %.2f\n", John.medium);
}

