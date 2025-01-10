#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(int argc, char const *argv[])
{
    int n; float sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,fact(n));
    for (size_t i = 1; i <= n; i++)
    {
        sum=sum+((float)i/fact(i));
    }
    printf("The sum of the factorials is = %f\n",sum);
    
    return 0;
}