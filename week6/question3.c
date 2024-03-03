#include <stdio.h>

#define MAX_SIZE 100

int isValid(int x, int y, int n) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

void printPath(int A[][MAX_SIZE], int n) {
    int i = 0, j = 0;
    int visited[MAX_SIZE][MAX_SIZE] = {0};

    while (i != n - 1 || j != n - 1) {
        visited[i][j] = 1;

        if (isValid(i + 1, j, n) && A[i + 1][j] == 1 && !visited[i + 1][j]) {
            printf("D");
            i++;
        } else if (isValid(i, j + 1, n) && A[i][j + 1] == 1 && !visited[i][j + 1]) {
            printf("R");
            j++;
        } else if (isValid(i - 1, j, n) && A[i - 1][j] == 1 && !visited[i - 1][j]) {
            printf("U");
            i--;
        } else if (isValid(i, j - 1, n) && A[i][j - 1] == 1 && !visited[i][j - 1]) {
            printf("L");
            j--;
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    scanf("%d", &n);

    int A[MAX_SIZE][MAX_SIZE]; // Assuming maximum size of matrix is 100x100

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printPath(A, n);

    return 0;
} 
