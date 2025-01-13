#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i, j = 0, k = 0;

    for (i = 0; i < size1 + size2; i++) {
        if (i < size1) {
            mergedArray[i] = arr1[j++];
        } else {
            mergedArray[i] = arr2[k++];
        }
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArray[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
       printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}