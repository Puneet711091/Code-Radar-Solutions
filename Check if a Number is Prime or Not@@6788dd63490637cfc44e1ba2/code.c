#include <stdio.h>


int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;
    printf(" ");
    scanf("%d", &number);
    printf("Prime  %s\n", number, is_prime(number) ? "" : "not ");
    return 0;
}