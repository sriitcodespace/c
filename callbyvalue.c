#include <stdio.h>

void swap(int x, int y);

int main() {
    int a, b;

    printf("Enter a and b values: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping: %d, %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: %d, %d\n", a, b);

    return 0;
}

void swap(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

