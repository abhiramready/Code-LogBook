#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int A[], int n) {
    int i;
    for (i = 0; i < n-1; i++) {
        int j = i;
        int k = i;
        
        for (; j < n; j++) {
            if (A[j] < A[k]) {
                k = j;
            }
        }
        swap(&A[i], &A[k]);
    }
}

int main() {
    int i,A[] = {3,7,9,10,6,5,12,4,11,2}, n = 10;
    
    selectionSort(A, n);
    
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    
    return 0;
}
