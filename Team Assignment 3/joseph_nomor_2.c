#include <stdio.h>

struct TanggalLahir
{
    int hari;
    int bulan;
    int tahun;
};

struct Alamat
{
    char NamaJalan[20];
    int NoRumah;
    char Kota[10];
    char Provinsi[10];
};

typedef struct Data_Dosen
{
    int NoDosen;
    int NIDN;
    char Nama[25];
    struct Alamat Alamat;
    char Tempat[10];
    struct TanggalLahir lahirnya;
} Dosen;

int main()
{
    Dosen dosen[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nMasukkan data dosen ke-%d \n", i + 1);
        printf("No dosen : ");
        scanf("%d", &dosen[i].NoDosen);
        printf("NIDN : ");
        scanf("%d", &dosen[i].NIDN);
        printf("Nama dosen : ");
        scanf("%s", &dosen[i].Nama);

        printf("Nama Jalan:");
        scanf("%s", &dosen[i].Alamat.NamaJalan);
        printf("No Rumah:");
        scanf("%d", &dosen[i].Alamat.NoRumah);
        printf("Kota:");
        scanf("%s", &dosen[i].Alamat.Kota);
        printf("Provinsi:");
        scanf("%s", &dosen[i].Alamat.Provinsi);

        printf("Tempat kelahiran :");
        scanf("%s", &dosen[i].Tempat);
        printf("Tanggal lahir : ");
        scanf("%d", &dosen[i].lahirnya.hari);
        printf("Bulan lahir : ");
        scanf("%d", &dosen[i].lahirnya.bulan);
        printf("Tahun lahir : ");
        scanf("%d", &dosen[i].lahirnya.tahun);
    }
}