#include<stdio.h>

int gcd (int a,int b){
    if (a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(int argc, char const *argv[])
{
    printf("%d\n",gcd(10,15));
    return 0;
}
