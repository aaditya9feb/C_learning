#include<stdio.h>

int main(){
    float radi;
    printf("Enter a number");
    scanf("%f",&radi);
    float area=3.14*radi*radi;
    float perimeter = 2*3.14*radi;
    printf("The area is %f.\n",area);
    printf("The perimeter is %f.\n",perimeter);
}