#include<stdio.h>

int input(void);

int main(){
    float num1 = input();
    float num2 = input();
    float num3 = input();
    float avg = (num1+num2+num3)/3;
    printf("The average of the numbers is %f.\n",avg);
}

int input(void){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    return n;
}


