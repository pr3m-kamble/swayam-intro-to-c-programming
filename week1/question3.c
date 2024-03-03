#include <stdio.h>

int main() {
    int a1, b1, c1;
    int a2, b2, c2;
    int x,y;
    
    // Input the first equation
    scanf("%d %d %d", &a1, &b1, &c1);

    // Input the second equation
    scanf("%d %d %d", &a2, &b2, &c2);

   // Solve using guassian elimination
   x = (c1*b2-c2*b1)/(a1*b2-a2*b1);
   y = (a2*c1-a1*c2)/(a2*b1-a1*b2);

    // Output the result
    printf("%d %d",x,y);

    return 0;
}
