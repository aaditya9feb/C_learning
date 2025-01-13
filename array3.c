#include <stdio.h>

int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Element found, return index
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 7;
    
    int result = search(arr, size, element);
    if (result != -1) {
        printf("Element %d found at index %d\n", element, result);
    } else {
        printf("Element %d not found in the array\n", element);
    }

    return 0;
}