#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number to find factorial: ");
    scanf("%lld", &n);

    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of the given number is %lld\n", fact);
    return 0;
}
