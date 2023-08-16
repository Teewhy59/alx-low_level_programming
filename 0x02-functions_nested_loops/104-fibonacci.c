#include <stdio.h>

int fibonacci(int n);

int main() {
    int i;
    for (i = 1; i <= 98; i++) {
        printf("%d", fibonacci(i));
        if (i < 98) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}

int fibonacci(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
