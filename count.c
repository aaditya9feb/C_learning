#include <stdio.h>

int main() {
    int num = 0;
	printf("Enter a numebr");
	scanf("%d",&num);
    int count = 0;

    // Count the digits using a while loop
    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits in 1234: %d\n", count);

    return 0;
}