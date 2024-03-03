#include <stdio.h>

#define N 1024

int BlockSum(int M[N], int i,int j, int n)
{
    int A,B;
    
    if(n == 2){
        return M[i] - M[j];
    }
    
    A = BlockSum(M,i,i+(n/2)-1,n/2);
    B = BlockSum(M,i+(n/2),j,n/2);
    
    return A - B;
}
 
 
int main()
{
 
    int n;
    int M[N];
    
    scanf("%d",&n);
 
    for(int i=0; i<n;i++)
        scanf("%d", &M[i]);
        
    printf("%d", BlockSum(M, 0, n-1, n));
    return 0;
