#include <stdio.h>

int collatz_repeat(int n) {
  if (n == 1) {
    return 0;
  } else {
    if (n % 2 == 1) {

      return 1 + collatz_repeat(3 * n + 1);
    } else {
      return 1 + collatz_repeat(n / 2);
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", collatz_repeat(n));
  return 0;
}
