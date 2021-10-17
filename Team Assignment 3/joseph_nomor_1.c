#include <stdio.h>
#include <string.h>

struct Tlahir
{
    int hari;
    int bulan;
};

typedef struct Iden
{
    char nama[25];
    char bintang[20];
    struct Tlahir lahirnya;
} Identitas;

char *BintangCalculator(int tanggal, int bulan)
{
    char *bintang;

    switch (bulan)
    {
    case 1:
        if (tanggal >= 20)
        {
            bintang = "Aquarius";
        }
        else
        {
        }

        break;

    case 2:
        if (tanggal >= 19)
        {
            bintang = "Pisces";
        }
        else
        {
            bintang = "Aquarius";
        }
        break;

    case 3:
        if (tanggal >= 21)
        {
            bintang = "Aries";
        }
        else
        {
            bintang = "Pisces";
        }
        break;

    case 4:
        if (tanggal >= 20)
        {
            bintang = "Taurus";
        }
        else
        {
            bintang = "Aries";
        }
        break;

    case 5:
        if (tanggal >= 21)
        {
            bintang = "Gemini";
        }
        else
        {
            bintang = "Taurus";
        }
        break;

    case 6:
        if (tanggal >= 21)
        {
            bintang = "Cancer";
        }
        else
        {
            bintang = "Gemini";
        }
        break;

    case 7:
        if (tanggal >= 23)
        {
            bintang = "Leo";
        }
        else
        {
            bintang = "Cancer";
        }
        break;

    case 8:
        if (tanggal >= 23)
        {
            bintang = "Virgo";
        }
        else
        {
            bintang = "Leo";
        }
        break;

    case 9:
        if (tanggal >= 23)
        {
            bintang = "Libra";
        }
        else
        {
            bintang = "Virgo";
        }
        break;

    case 10:
        if (tanggal >= 23)
        {
            bintang = "Scorpio";
        }
        else
        {
            bintang = "Libra";
        }
        break;

    case 11:
        if (tanggal >= 22)
        {
            bintang = "Sagitarius";
        }
        else
        {
            bintang = "Scorpio";
        }
        break;

    case 12:
        if (tanggal < 21)
        {
            bintang = "Sagitarius";
        }
        else
        {
        }
        break;

    default:
        bintang = "none";

        break;
    }

    return bintang;
}

int main()
{
    Identitas Identity;
    // clrscr();
    printf("Masukkan Nama: ");
    scanf("%s", &Identity.nama);
    printf("Masukkan Tanggal lahir: ");
    scanf("%d %d", &Identity.lahirnya.hari, &Identity.lahirnya.bulan);
    // split();
    strcpy(Identity.bintang, BintangCalculator(Identity.lahirnya.hari, Identity.lahirnya.bulan));

    printf("\nNama: %s\n", Identity.nama);
    printf("Bintang: %s\n", Identity.bintang);
    printf("Tanggal Lahir: %d %d\n", Identity.lahirnya.hari, Identity.lahirnya.bulan);

    return 0;
}