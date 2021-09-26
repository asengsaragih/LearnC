#include <stdio.h>

int main()
{
    int A = 2, B = 3, C = 4, K = 5, L = 6, M = 7;

    int D = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2);
    printf("%d", D);

    return 0;
}
