#include "main.h"
#include <stdio.h>

/**
 * main - print any range
 *
 * Description: function that print the times table up to a given number n
 * Do not pint anythin if n is out of range
 */

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return; 
    }

    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            printf("%d", i * j);
            if (j != n) {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main() {
    int number = 10;
    print_times_table(number);
    return 0;
}
