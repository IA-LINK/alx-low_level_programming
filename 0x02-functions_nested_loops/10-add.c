#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int add(int a, int b);

int main() {
    int num1 =89;
    int num2 = 9;
    int result = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}
