/*
 * Name: Mohamed Diakhate
 * Course: CSc 352 Spring 2025
 * Assignment 1
 * Problem 1: isFib
 * 
 * This program reads positive integers from stdin and determines 
 * whether each number is a Fibonacci number or not.
 */

#include <stdio.h>
#include <stdlib.h>

int isFibonacci(int n) {
    if (n == 1) return 1;
    
    int prev = 1, curr = 1;
    
    while (curr <= n) {
        if (curr == n) return 1;
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return 0;
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
        
        if (isFibonacci(num)) {
            printf("%d is fib\n", num);
        } else {
            printf("%d is not fib\n", num);
        }
    }
    
    if (!feof(stdin)) {
        fprintf(stderr, "Error: Invalid input\n");
        return 1;
    }
    
    return hasError;
}
