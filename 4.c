#include <stdio.h>
void leftShift(int arr[], int n){
    int first = arr[0];
    for (int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = first;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);

    leftShift(arr, n);
    printf("Modified array: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}