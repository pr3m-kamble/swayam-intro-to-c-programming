#include <stdio.h>
int main() {
  int k;
  scanf("%d", & k);

  int odd_count = 0;
  int curr, flag = 0;

  scanf("%d", & curr);
  while (curr != -1) {
    if (curr % 2 == 1) {
      odd_count = odd_count + 1;
      if (odd_count == k) {
        printf("%d", curr);
        flag = 1;
      }
    }
    scanf("%d", & curr);
  }
  
  if(flag == 0)
    printf("-1");
  
  return 0;
}
