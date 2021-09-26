#include <stdio.h>

int main()
{
    int A = 2;
    int B = 3;
    int C = 4;
    int K = 5;
    int L = 6;
    int M = 7;

    double totalA = 4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2;
    double totalB = K + 5 < M || ( C * M < L && 2 * M - L > 0 );
    double totalC = L + 5 < M || C * K < L && 2 * K - L > 0 ;
    double totalD = A * 4 <= 3 * M + B;
    double totalE = K + 10 > A && L - 2 > 4 * C;

    printf("A : ");
    printf("%.0f", totalA);
    printf("\n");

    printf("B : ");
    printf("%.0f", totalB);
    printf("\n");

    printf("C : ");
    printf("%.0f", totalC);
    printf("\n");

    printf("D : ");
    printf("%.0f", totalD);
    printf("\n");

    printf("E : ");
    printf("%.0f", totalE);
    printf("\n");

    return 0;
}