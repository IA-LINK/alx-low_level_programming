#include "main.h"
#include <stdio.h>

/**
 * add - adds two values
 * @n1: the first number to be written
 * @n2: the second number to be written
 *
 * Return: Integer value
 */

int add(int a, int b);

int main() {
    int num1 = 10;
    int num2 = 5;
    int result = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}
