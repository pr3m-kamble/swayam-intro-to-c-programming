#include <stdio.h>

int main() {
    // Declare variable to store values of a and b.
    int a, b;
    
    // Declare variable to store the sum of a and b.
    int sum;

    // Read a and b
    scanf("%d %d", &a,&b);

    // Calculate the sum
    sum = a + b;
    printf("%d",sum);

    // Return 0 to indicate successful completion
    return 0;
}
