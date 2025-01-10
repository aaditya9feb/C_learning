#include<stdio.h>

int fact(int a){
    if (a ==1)
    {
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int main(int argc, char const *argv[])
{
    printf("%d",fact(6));
    return 0;
}
