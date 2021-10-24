#include <stdio.h>

int maximum(int x, int y) {
    int max = x;

    if (y > max)
    {
        max = y;
    }

    return max;
}

void main() {
    int a, b;
    printf("Input 2 even values : ");
    scanf("%d %d", &a, &b);
    printf("Largest Value : %d\n", maximum(a,b));
}