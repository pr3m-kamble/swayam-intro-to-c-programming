#include <stdio.h>

int main() {
    int n, m;
    
    scanf("%d", &n);
    
    int arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    
    scanf("%d", &m);
    
    int arr2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }


    int smallest = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                if (smallest == -1 || arr1[i] < smallest) {
                    smallest = arr1[i];
                }
            }
        }
    }

    if (smallest != -1) {
        printf("%d", smallest);
    } else {
        printf("-1");
    }

    return 0;
}
