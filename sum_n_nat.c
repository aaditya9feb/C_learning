#include<stdio.h>

void main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum = 0;
    while(n>0){
        sum= sum+n;
        n = n-1;
    }
    printf("%d",sum);
    

}