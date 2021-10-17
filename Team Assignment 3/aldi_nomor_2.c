#include <stdio.h>

struct Datebirth
{
    int day;
    int month;
    int year;
};

struct Address
{
    char homenumber[3];
    char homeaddress[50];
    char city[50];
    char province[50];
};

struct Dosen
{
    char nodosen[50];
    char nidn[50];
    char nama[50];
    struct Address address;
    char placedatebirth[50];
    struct Datebirth datebirth;
};

int main()
{
    struct Dosen dosens[5];
    printf("Masukkan 5 data dosen\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nMasukkan data %d", (i+1));

        printf("\nMasukkan nomor: ");
        scanf("%s", &dosens[i].nodosen);

        printf("\nMasukkan nidn: ");
        scanf("%s", &dosens[i].nidn);

        printf("\nMasukkan nama: ");
        scanf("%s", &dosens[i].nama);

        printf("\nMasukkan kota: ");
        scanf("%s", &dosens[i].address.city);

        printf("\nMasukkan provinsi: ");
        scanf("%s", &dosens[i].address.province);

        printf("\nMasukkan nomor rumah: ");
        scanf("%s", &dosens[i].address.homenumber);

        printf("\nMasukkan alamat lengkap: ");
        scanf("%s", &dosens[i].address.homeaddress);

        printf("\nMasukkan tempat lahir: ");
        scanf("%s", &dosens[i].placedatebirth);

        printf("\nMasukkan tanggal lahir (1-31): ");
        scanf("%d", &dosens[i].datebirth.day);

        printf("\nMasukkan bulan lahir (1-12): ");
        scanf("%d", &dosens[i].datebirth.month);

        printf("\nMasukkan tahun lahir: ");
        scanf("%d", &dosens[i].datebirth.year);
    }

    printf("\nDosen Information:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nNomor: %s", dosens[i].nodosen);
        printf("\nNIDN: %s", dosens[i].nidn);
        printf("\nNama: %s", dosens[i].nama);
        printf("\nKota: %s", dosens[i].address.city);
        printf("\nProvinsi: %s", dosens[i].address.province);
        printf("\nAlamat: %s", dosens[i].address.homeaddress);
        printf("\nNomor Rumah: %s", dosens[i].address.homenumber);
        printf("\nTempat Lahir: %s", dosens[i].placedatebirth);
        printf("\nTanggal Lahir: %d-%d-%d\n", dosens[i].datebirth.day, dosens[i].datebirth.month, dosens[i].datebirth.year);
    }
    
    return 0;
}