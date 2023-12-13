#include <stdio.h>
#include "sdt.h"

int main() {

    int num1, num2;

    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter: %d and %d\n", num1, num2);

    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    int diff = num1 - num2;
    printf("Diff: %d\n", diff);

    return 0;
}
