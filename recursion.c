#include<stdio.h>

long int fact(int a){
    if (a ==1)
    {
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int main(int argc, int argv[])
{
    printf("%ld",fact(25));
    return 0;
}
