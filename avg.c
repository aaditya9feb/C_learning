#include<stdio.h>

int input(void);

int main(){
    int num1 = input();
    int num2 = input();
    int num3 = input();
    int avg = (num1+num2+num3)/3;
    printf("The average of the numbers is %d.\n",avg);
}

int input(void){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    return n;
}


