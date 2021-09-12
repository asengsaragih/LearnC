#include <stdio.h>

int main()
{
    int odd;
    int even;

    do
    {
        printf("Masukkan nilai ganjil : ");
        scanf("%d", &odd);
    } while (odd % 2 == 0);

    do
    {
        printf("Masukkan nilai genap : ");
        scanf("%d", &even);
    } while (even % 2 == 1);

    double ratarata = ((double)odd + (double)even) / 2;
    int kuadrat = (odd * odd) + (even * even);

    printf("a. Nilai rata rata : ");
    printf("%.2f", ratarata);

    printf("\n");

    printf("b. Nilai kuadrat : ");
    printf("%d", kuadrat);

    return 0;
}