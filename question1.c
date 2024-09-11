#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        int e;
        printf("Enter an integer into arr[%d]: ", i);
        scanf("%d", &e);
        arr[i] = e;
    }
    printf("Integer array in reverse order:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;
}