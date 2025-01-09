#include<stdio.h>
#include<math.h>


int input(void){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    return n;
}

int main(int argc, char const *argv[])
{
    float a=input();
    float b=input();
    float c=input();
    float semi_peri=(a+a+c)/2;
    float temp = semi_peri*(semi_peri-a)*(semi_peri-b)*(semi_peri-c);
    float result = pow(temp,0.5);
    printf("The area of triangle is %f.\n",result);

    return 0;
}
