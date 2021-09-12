#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char x[25], y[25], z[50], zrev[50];
    int lenx, leny, lenz;
    printf("Kalimat 1=");
    scanf("%s", x);

    printf("Kalimat 2=");
    scanf("%s", y);

    lenx = strlen(x);
    leny = strlen(y);

    lenx = strlen(x);
    leny = strlen(y);
    strcpy(z, x);

    strncat(z, " ", 2);
    strncat(z, y, 25);
    strcpy(zrev, z);
    strrev(zrev);

    printf("Gabungan 2 buah inputan kalimat=%s %s\n", x, y);
    printf("Hasil membalik kalimat gabungan=%s\n", zrev);
    printf("Jumlah Huruf kalimat pertama=%d\n", lenx);
    printf("Jumlah Huruf kalimat kedua=%d\n", leny);
    printf("Total Jumlah huruf=%d\n", lenx + leny);
    printf("Total Perkalian kalimat= %d\n", lenx * leny);
    return 0;
}
