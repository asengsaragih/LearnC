#include <stdio.h>

int main()
{
    char nama[50], pendidikan[5];
    int golongan, jumlahJam;

    printf("PROGRAM HITUNG GAJI KARYAWAN");
    printf("\n");

    printf("Nama Karyawan: ");
    scanf("%s", &nama);
    printf("\n");

    printf("Golongan Jabatan: ");
    scanf("%d", &golongan);
    printf("\n");

    printf("Pendidikan: ");
    scanf("%s", &pendidikan);
    printf("\n");

    printf("Jumlah jam kerja: ");
    scanf("%d", &jumlahJam);
    printf("\n");

    /* PERHITUNGAN */
    //hitung tunjangan jabatan
    double tj;
    if (golongan == 1)
        tj = 2000000 * 0.05;
    else if (golongan == 2)
        tj = 2000000 * 0.1;
    else
        tj = 2000000 * 0.15;

    double tp;
    if (golongan == "SMA")
        tp = 2000000 * 0.025;
    else if (golongan == "D3")
        tp = 2000000 * 0.05;
    else
        tp = 2000000 * 0.1;

    //hitung lembur
    double lembur = 0;
    if (jumlahJam > 8)
        lembur = (jumlahJam - 8) * 3000;

    //hitung gaji total
    double gaji =  2000000 + tj + tp + lembur;

    /* OUTPUT */
    printf("Nama Karyawan ");
    printf("%s", nama);
    printf("\n");

    printf("Tunjangan Jabatan Rp. ");
    printf("%.0f", tj);
    printf("\n");

    printf("Tunjangan Pendidikan Rp. ");
    printf("%.0f", tp);
    printf("\n");

    printf("Honor Lembur Rp. ");
    printf("%.0f", lembur);
    printf("\n");

    printf("Total Gaji Rp. ");
    printf("%.0f", gaji);
    printf("\n");

    return 0;
}
