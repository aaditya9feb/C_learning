#include <stdio.h>

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {12, 3, 7, 1, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = findMin(arr, n);
    printf("The minimum value in the array is: %d\n", min);
    return 0;
}