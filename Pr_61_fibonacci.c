/*Program to find Fibonacci series up to n terms using recursive function*/
#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1)
        return n; 
    else
        return fibonacci(n - 1) + fibonacci(n - 2); 
}


void printFibonacci(int n, int count) {
    if (count == n)
        return;
    
    printf("%d ", fibonacci(count));
    printFibonacci(n, count + 1); 
}

int main() {
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Fibonacci series up to %d terms: ", n);
    printFibonacci(n, 0);
    
    return 0;
}
