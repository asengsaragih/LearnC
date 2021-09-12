#include <stdio.h>
int main()
{
    int Bilangannya;
    printf("Apakah ini bilangan ganjil atau genap?");
    printf("\n");
    printf("Masukkan angkanya disini: ");
    scanf("%d", &Bilangannya);
    if (Bilangannya % 2 == 1)
        printf("Ya, ini bilangan ganjil.");
    else
        printf("Bukan, ini bukan bilangan ganjil.");
    printf("\n");
    printf("Masukkan angkanya disini: ");
    scanf("%d", &Bilangannya);
    if (Bilangannya % 2 == 1)
        printf("Ya, ini bilangan ganjil.");
    else
        printf("Bukan, ini bukan bilangan ganjil.");
    return 0;
}
