/*Program to find sum of first n natural numbers using recursive function.*/
#include<stdio.h>

int firstnnum(int num) {
    static int sum = 0;
    if (num == 0) {
        return 0;
    } else {
        return num + firstnnum(num - 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int result = firstnnum(n);
    printf("Sum of first %d natural numbers: %d\n", n, result);
    return 0;
}
