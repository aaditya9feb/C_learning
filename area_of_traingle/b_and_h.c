#include<stdio.h>
int input(void){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    return n;
}


void main(){
    float base =input();
    float height = input();
    float area = (base*height)/2;
    printf("The area of traingle is %f.\n",area);
}