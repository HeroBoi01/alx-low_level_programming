#include <stdio.h>

void print_fibonacci(int n) {
    int i;
    unsigned long long int fib1 = 1;
    unsigned long long int fib2 = 2;
    unsigned long long int fib;

    printf("%llu, %llu", fib1, fib2);

    for (i = 3; i <= n; i++) {
        fib = fib1 + fib2;
        printf(", %llu", fib);
        fib1 = fib2;
        fib2 = fib;
    }

    printf("\n");
}

int main() {
    print_fibonacci(50);
    return 0;
}
