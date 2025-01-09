#include<stdio.h>
#include<math.h>

float input(){
    float num;
    int result;
    while (1) {
        printf("Enter a number: ");
        result = scanf("%f", &num);
        if (result == 1) {
            break;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n'); // clear the input buffer
        }
    }
    return num;
}

int main(int argc, char const *argv[])
{
    while(1==1){
        printf("Enter 1 for square\n2 for rectangle\n3 for triangle\n4 to quit\n");
        int decider = (int)input();
        if(decider==1){
            printf("Enter the length of the side: ");
            float side = input();
            float area = powf(side,2);
            printf("%f\n",area);
        }
        else if (decider==2)
        {
            printf("Enter the length : ");
            float l = input();
            printf("Enter the breadth : ");
            float b = input();
            float area = l*b;
            printf("%f\n",area);
        }
        else if (decider==3)
        {
            printf("Enter the base length : ");
            float b = input();
            printf("Enter the height : ");
            float h = input();
            float area = (b*h)/2;
            printf("%f\n",area);
        }
        else if (decider==4)
        {
            break;
        }
        
        else{
            printf("Invalid decider please enter either 1, 2, 3, or 4\n");
        }
        
        
    }
    return 0;
}
