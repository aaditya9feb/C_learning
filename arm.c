#include <stdio.h>
#include <math.h>

int main(){
    int num;
    int arm=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp = num;
    int count = 0;

    while (num != 0) {
        num /= 10;
        count++;
    }

    num = temp; // Reassign num to the original value

    while(num!=0){
        arm += pow(num % 10, count); 
        num = num/10;
    }

    if(temp==arm){
        printf("It is an Armstrong number\n");
    }
    else{
        printf("It is not an Armstrong number\n"); 
    }
    return 0;
}