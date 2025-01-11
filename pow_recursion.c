#include<stdio.h>

int power (int base , int exponent){
    if (exponent==0)
    {
        return 1;
    }
    else{
        return base*power(base,exponent-1);
    }

}

int main(int argc, char const *argv[])
{
    printf("%d",power(5,5));
    return 0;
}
