#include<stdio.h>
#include<string.h>
#define max_size 100

int main() {
    int ch, n;
    char s[max_size];
    printf("Enter 1: check the number palindrome\n2: string palindrome\n");
    scanf("%d", &ch);
    getchar(); // Consume newline character left in buffer after scanf

    switch(ch) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);
            int temp = n, reversed = 0;
            while (temp != 0) {
                reversed = reversed * 10 + temp % 10;
                temp /= 10;
            }
            if (reversed == n)
                printf("Number is palindrome\n");
            else
                printf("Number is not a palindrome\n");
            break;
        case 2:
            printf("Enter a string: ");
            fgets(s, sizeof(s), stdin);
            int i = 0, len = strlen(s) - 1; // -1 to remove the newline character
            while (len > i) {
                if (s[i++] != s[len--]) {
                    printf("%s is not a palindrome\n", s);
                    return 0;
                }
            }
            printf("%s is a palindrome\n", s);
            break;
        default:
            printf("Invalid option\n");
    }
    return 0;
}
