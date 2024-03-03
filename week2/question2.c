#include <stdio.h>

int main() {
    int num, count = 0, count2 = 0;
    
    // Read until first 1
    do{
        scanf("%d", &num);
    }while(num==0);
    
    // Only zeroes in the list
    if(num == -1) 
        printf("0");
    
    // Read rest of input 
    do{
        scanf("%d", &num);
        if(num == 0)
            // Increment number of 0's seen after last 1
            count2++;        
        else if(num == 1){
            /*1 detected. count2 is added to count,
            and is reset to 0*/
            count += count2;
            count2 = 0;
        }
    }while(num != -1);

    printf("%d", count);
    return 0;
}
