#include<stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void copyArray(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
}

int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    copyArray(arr1, arr2, size);
    printArray(arr1, size);
    printArray(arr2, size);
    copyArray(arr1, arr2, size);
    return 0;
}
