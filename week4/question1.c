#include <stdio.h>

int main() {
    int size;
    int array[20];
    
    // Reading the input
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    // Finding the sum
    
    int sum1 = 0;
    
    for(int i = 0; i < size; i++) {
        sum1 += array[i];
    }
    
	// Finding the mean
	
    float avg = (float) sum1/size;
    int sum2 = 0;
    
	// Finding the sum of elements above mean
    for(int i = 0; i < size; i++) {
        if(array[i] >= avg){
            sum2+= array[i];
        }
    }
    
    printf("%d",sum2);
}
