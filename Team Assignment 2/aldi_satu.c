#include <stdio.h>

int main()
{
    int jam;
    double total;

    printf("Masukkan Jumlah Jam: ");
    scanf("%d", &jam);
    printf("\n");

    if (jam >= 5)
        total = (jam * 2000) - (jam * 2000 * 0.2);
    else
        total = jam * 2000;

    printf("Total : ");
    printf("%.0f", total);
    
    return 0;
}