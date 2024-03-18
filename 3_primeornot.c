#include<stdio.h>

int main() {
    int n;
    printf("Enter a number to check whether it is prime or not: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Given number is not a prime number\n");
        return 0;
    }

    int flag = 1; // Initialize flag as 1 (assuming the number is prime)

    // Check divisibility of n with numbers from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 0; // If n is divisible by any number, set flag to 0
            break;
        }
    }

    if (flag == 1)
        printf("Given number is prime\n");
    else
        printf("Given number is not a prime number\n");

    return 0;
}
