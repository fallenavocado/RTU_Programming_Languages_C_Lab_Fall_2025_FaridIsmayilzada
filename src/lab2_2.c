#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i<=n; i++) {
        result *= i;
    }
    // TODO: compute factorial iteratively
    return result; // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);
if (n<0) { 
    printf("Your input doesn't seem to be a positive integer");
    return 1;
}
else {
    long long fact = factorial(n);
    printf("%d! = %lld\n", n, fact);
}
    // TODO: validate input, call function, print result

    return 0;
}
