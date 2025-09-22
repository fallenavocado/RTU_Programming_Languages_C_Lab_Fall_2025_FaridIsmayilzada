#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/


int sum_to_n(int n) {
  int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        printf("%d\n", i);
    }
    
    return sum; // placeholder
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);
if (n<1) { 
    printf("Your input doesn't seem to be a positive integer");
}
    else {
    printf("The sum of integers from 1 to %d is %d\n", n, sum_to_n(n));
    return 0;
}
    // TODO: validate input, call function, and print result

    return 0;
}
