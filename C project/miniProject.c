#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1;

    // Step 1 & 2: Ask and read number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Step 3: Check positive, negative or zero
    if (n > 0)
        printf("Number is Positive\n");
    if (n < 0)
        printf("Number is Negative\n");
    if (n == 0)
        printf("Number is Zero\n");

    // Step 4: Check even or odd
    if (n % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    // Step 5–8: Prime check
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Step 9: Display prime result
    if (isPrime)
        printf("Number is Prime\n");
    else
        printf("Number is Not Prime\n");

    // Step 10: End program
    return 0;
}