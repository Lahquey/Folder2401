#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;

    printf("First 100 prime numbers:\n");

    while (count < 100) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}

