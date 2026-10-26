#include <stdio.h>

int main() {
    float length = 10.5;
    float width = 5.0;
    float area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
