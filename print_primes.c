#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void print_primes(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    print_primes(start, end);

    return 0;
}