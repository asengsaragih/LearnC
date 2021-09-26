#include <stdio.h>

int main(void)
{
    float nama, nomor, jam, total, diskon, waktu_pakai, total_tagihan;

    printf("Billing Game Online \n");
    printf("======================================= \n");
    printf("No Komputer : ");
    scanf("%s", &nomor);
    printf("Nama Customer : ");
    scanf("%s", &nama);
    printf("Waktu Pemakaian (jam) : ");
    scanf("%f", &jam);
    waktu_pakai = jam * 2000;
    if (jam > 5)
        diskon = 0.2 * waktu_pakai;
    else
        diskon = 0;
    total_tagihan = waktu_pakai - diskon;
    printf("\n");
    printf("Biaya = %.f\n", waktu_pakai);
    printf("Diskon = %.f\n", diskon);
    printf("Total Tagihan = %.f\n", total_tagihan);
}