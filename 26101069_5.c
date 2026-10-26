#include <stdio.h>

int main() {
    float mark1 = 75.5;
    float mark2 = 82.0;
    float mark3 = 68.5;
    float total, average;

    total = mark1 + mark2 + mark3;
    average = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
