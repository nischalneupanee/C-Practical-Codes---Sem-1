/*Program to calculate b n using recursive as well as non recursive function*/
#include <stdio.h>

int powerRecursive(int b, int n) {
    if (n == 0)
        return 1;
    else
        return b * powerRecursive(b, n - 1);
}


int powerNonRecursive(int b, int n) {
    int result = 1;
    while (n > 0) {
        if (n % 2 != 0) {
            result *= b;
        }
        b *= b;
        n /= 2;
    }
    return result;
}

int main() {
    int b, n;
    printf("Enter the base (b): ");
    scanf("%d", &b);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    printf("Using recursion: %d^%d = %d\n", b, n, powerRecursive(b, n));

    printf("Without recursion: %d^%d = %d\n", b, n, powerNonRecursive(b, n));

    return 0;
}
