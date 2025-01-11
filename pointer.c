/*
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 20,*p,*q;
    p=&i;
    q=p;
    printf("%d %d %d",i,*p,*q);
    *q=40;
    printf("%d %d %d",i,*p,*q);
    return 0;
}

*/

#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int arr[5];

    // Assign values to the elements of the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    // Access and print the elements of the array
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}