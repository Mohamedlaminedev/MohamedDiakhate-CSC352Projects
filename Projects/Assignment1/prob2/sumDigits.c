/*
 * Name: Mohamed Diakhate
 * Course: CSc 352 Spring 2025
 * Assignment 1
 * Problem 2: sumDigits
 * 
 * This program reads positive integers from stdin and calculates
 * the sum of digits for each number.
 */

#include <stdio.h>
#include <stdlib.h>

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    int hasError = 0;
    
    while (scanf("%d", &num) == 1) {
        if (num <= 0) {
            fprintf(stderr, "Error: Input must be positive\n");
            hasError = 1;
            continue;
        }
        
        printf("%d\n", sumDigits(num));
    }
    
    if (!feof(stdin)) {
        fprintf(stderr, "Error: Invalid input\n");
        return 1;
    }
    
    return hasError;
}
