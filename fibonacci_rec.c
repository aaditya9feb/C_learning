#include<stdio.h>

int fib(int a,int b,int limit){
    int c = a+b;
    printf("%d ",c);
    if(limit-2==1){
        return c;
    }
    else{
        fib(b,c,limit-1);
    }
}

int main(int argc, char const *argv[])
{
    printf("0 1 ");
    fib(0,1,10);
    printf("\n");
    return 0;
}
