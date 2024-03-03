#include <stdio.h>

int main() {
    int size;
    char s1[20],s2[20];
    int isanagram = 1;
    
    // Reading the input
    scanf("%d", &size);
    scanf("%s",s1);
    scanf("%s",s2);
    
	//flag variable to detect character is present in s2.
    int flag;
    
	// Loop through each element in s1
    for(int i = 0; i < size; i++) {
        flag = 0;                         // Set flag to 0
        for(int j = 0; j < size; j++){
            if(s2[j] == s1[i]){           // s1[i] found in s2.
                s2[j] = '0';              // set s2[j] to 0, so that its not counted again.
                flag = 1;
                break;
            }
        }
        if(flag == 0){                    // If match is not found, its not an anagram
            isanagram = 0;
        }
    }
    
    
    printf("%d", isanagram); // Printing the result
    return 0;
}
