#include <stdio.h>

int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    printf("Enter a number to find its factorial\n ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial (Recursive): %d\n", factorial_recursive(num));
    }

}
