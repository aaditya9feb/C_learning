#include<stdio.h>

void main(){
    int n=20;
    int sum = 0;
    while(n>0){
        sum= sum+n;
        n = n-1;
    }
    printf("%d",sum);
    

}