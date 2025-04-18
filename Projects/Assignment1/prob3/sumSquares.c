/*
 * Name: Mohamed Diakhate
 * Course: CSc 352 Spring 2025
 * Assignment 1
 * Problem 3: sumSquares
 * 
 * This program reads two positive integers m and n and prints all
 * numbers in the interval [m,n] that can be written as the sum
 * of two squares.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Check if a number can be written as sum of two squares
int isSumOfSquares(int n) {
    int limit = (int)sqrt(n);
    
    for (int i = 1; i <= limit; i++) {
        int remaining = n - (i * i);
        int root = (int)sqrt(remaining);
        
        // Check if remaining is a perfect square and root is positive
        if (root > 0 && (root * root == remaining)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int m, n;
    
    // Try to read two integers
    if (scanf("%d %d", &m, &n) != 2) {
        fprintf(stderr, "Error: Failed to read two integers\n");
        return 1;
    }
    
    // Check if inputs are positive
    if (m <= 0 || n <= 0) {
        fprintf(stderr, "Error: Inputs must be positive\n");
        return 1;
    }
    
    // Print numbers that are sum of two squares in [m,n]
    for (int i = m; i <= n; i++) {
        if (isSumOfSquares(i)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

