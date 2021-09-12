#include<stdio.h>
#include<string.h>

int main() {
    char kalimatsatu[20], kalimatdua[20];

    printf("Masukkan kalimat pertama : ");
    scanf("%s", &kalimatsatu);

    printf("Masukkan kalimat kedua : ");
    scanf("%s", &kalimatdua);

    char kalimatgabungan[40];
    snprintf(kalimatgabungan, sizeof(kalimatgabungan), "%s %s", kalimatsatu, kalimatdua);

    printf("Gabungan 2 buah inputan kalimat = ");
    printf("%s", kalimatgabungan);
    printf("\n");

    printf("Hasil membalik kalimat gabungan = ");
    printf("%s", strrev(kalimatgabungan));
    printf("\n");

    int jumlahKalimatsatu = strlen(kalimatsatu);
    int jumlahKalimatdua = strlen(kalimatdua);
    int totalKalimat = jumlahKalimatsatu + jumlahKalimatdua;
    int perkalianKalimat = jumlahKalimatsatu * jumlahKalimatdua;

    printf("Jumlah Huruf kalimat pertama = ");
    printf("%d", jumlahKalimatsatu);
    printf("\n");

    printf("Jumlah Huruf kalimat kedua = ");
    printf("%d", jumlahKalimatdua);
    printf("\n");

    printf("Total Jumlah huruf = ");
    printf("%d", totalKalimat);
    printf("\n");

    printf("Total perkalian kalimat = ");
    printf("%d", perkalianKalimat);
    printf("\n");
    return 0;
}