#include <stdio.h>

int main() {
  float first;
  float second;
  float curr;
  scanf("%f", & first);
  scanf("%f", & second);
  printf("%.1f ", (first + second) / 2);
  scanf("%f", & curr);
  while (curr != -1) {
    first = second;
    second = curr;
    printf("%.1f ", (first + second) / 2);
    scanf("%f", & curr);
  }
  return 0;
}
