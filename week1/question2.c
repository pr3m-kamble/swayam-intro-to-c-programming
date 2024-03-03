#include <stdio.h>

int main() {
    int a, b, c;

    // Read a b and c
    scanf("%d %d %d", &a, &b, &c);

    // Variable to store second largest number
    int secondLargest;

	// a is second largest if b < a < c or c < a < b  
    if ((b < a && a < c) || (c < a && a < b))
        secondLargest = a;
		
	// b is second largest if a < b < c or c < b < a  	
    else if ((a < b && b < c) || (c < b && b < a))
        secondLargest = b;
		
	// Otherwise c will be the second largest
	else
        secondLargest = c;

    // Output the result
    printf("%d",secondLargest);

    return 0;
}
