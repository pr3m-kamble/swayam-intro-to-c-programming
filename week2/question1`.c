#include <stdio.h>

int main() {
    int bit;
    int count = 0;

    // Read bits until -1 is encountered
    while (1) {
        scanf("%d", &bit);
        
        // Check for end of input
        if (bit == -1) {
            break;
        }

        // Count the number of 1's
        if (bit == 1) {
            count++;
        }
    }

    // Check if the count of 1's is even
    if (count % 2 == 0) {
        printf("1");  // Even parity
    } else {
        printf("0");  // Odd parity
    }

    return 0;
}
