#include <stdio.h>

int main() {
    int num,temp, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;

    while(num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10; //num = num/10
    }

    if (reversedNumber==temp){
        printf("Then number is a palindrome\n");
    }

    else{
        printf("The number is not a palindrome\n");
    }

    return 0;
}