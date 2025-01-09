#include<stdio.h>

char operator();

int input();



int main(int argc, char const *argv[])
{
    while (1==1)
    {
        char op = operator();
        if (op=='+')
        {
            float num1 = input();
            float num2 = input();
            printf("The sum pf the numbers is: %f",num1+num2);
            break;
        }
        else if (op=='-')
        {
            float num1 = input();
            float num2 = input();
            printf("The difference of the numbers is: %f",num1-num2);
            break;
        }
        else if (op=='*')
        {
            float num1 = input();
            float num2 = input();
            printf("The product of the numbers is: %f",num1*num2);
            break;
        }
        else if (op=='/')
        {
            float num1 = input();
            float num2 = input();
            printf("The division of the numbers is: %f",num1/num2);
            break;
        }
        else{
            printf("Enter a valid operation.\n");
        }
    }
    
    return 0;
}

char operator(){
    char operator;
    printf("Enter the operation to do: ");
    scanf("%c",&operator);
    return operator;
}

int input(){
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    return num;

}

    