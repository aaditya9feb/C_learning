#include <stdio.h>

int main() {
    int num, limit;

    // Ask the user for the number and the limit
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // Print the multiplication table
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}