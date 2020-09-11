#include <stdio.h>

int Fibonacci(int n){
    return (n==0 || n==1)?n:Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("Fibonaaci(%d)=%d",n,Fibonacci(n));
    return 0;
}

