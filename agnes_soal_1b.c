#include <stdio.h>

#include <math.h>

int main()
{
    int a, b, hasil;

    float rata;
    printf("Masukkan bilangan pertama dan kedua:");

    scanf("%d %d", &a, &b);

    hasil = a + b;

    printf("\nHasil penjumlahan %d", hasil);

    rata = (a + b) / 2;

    printf("\nHasil rata-rata %10.2f", rata);

    hasil = pow(a, b);

    printf("\nHasil %d pangkat %d adalah %d", a, b, hasil);

    return 0;
}
