#include <stdio.h>

void windowSmoothing(int A[][100], int n, int l) {
    int B[100][100]; // Assuming maximum size of matrix is 100x100

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int il = (i - l < 0) ? 0 : (i - l);
            int ih = (i + l >= n) ? (n - 1) : (i + l);
            int jl = (j - l < 0) ? 0 : (j - l);
            int jh = (j + l >= n) ? (n - 1) : (j + l);

            int sum = 0;
            for (int u = il; u <= ih; u++) {
                for (int v = jl; v <= jh; v++) {
                    sum += A[u][v];
                }
            }
            B[i][j] = sum;
        }
    }

    // Printing the smoothed matrix B
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, l;
    
    scanf("%d", &n);
    
    scanf("%d", &l);

    int A[100][100]; // Assuming maximum size of matrix is 100x100

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    windowSmoothing(A, n, l);

    return 0;
}
