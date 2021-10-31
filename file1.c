#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataInputMinuman
{
    char NamaMinuman[10];
    char Size[10];
    char Penyajian[10];
    int harga;
} Input;

int main()
{
    Input Minum = {0};
    int num;
    FILE *fptr;

    fptr = fopen("dataminuman.txt", "a");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Input:\n");
    do
    {
        printf("Nama minuman(kopi, teh, coklat, soda):");
        scanf("%s", &Minum.NamaMinuman);
        if (strcmp(Minum.NamaMinuman, "kopi") != 0 && strcmp(Minum.NamaMinuman, "teh") != 0 && strcmp(Minum.NamaMinuman, "coklat") != 0 && strcmp(Minum.NamaMinuman, "soda") != 0)
        {
            printf("Input tidak sesuai\n");
        }
    } while (strcmp(Minum.NamaMinuman, "kopi") != 0 && strcmp(Minum.NamaMinuman, "teh") != 0 && strcmp(Minum.NamaMinuman, "coklat") != 0 && strcmp(Minum.NamaMinuman, "soda") != 0);

    do
    {
        printf("Size minuman(small, medium, largest):");
        scanf("%s", &Minum.Size);
        if (strcmp(Minum.Size, "small") != 0 && strcmp(Minum.Size, "medium") != 0 && strcmp(Minum.Size, "largest") != 0)
        {
            printf("Input tidak sesuai\n");
        }

    } while (strcmp(Minum.Size, "small") != 0 && strcmp(Minum.Size, "medium") != 0 && strcmp(Minum.Size, "largest") != 0);

    do
    {
        printf("Penyajian(dingin, panas, hangat):");
        scanf("%s", &Minum.Penyajian);
        if (strcmp(Minum.Penyajian, "dingin") != 0 && strcmp(Minum.Penyajian, "panas") != 0 && strcmp(Minum.Penyajian, "hangat") != 0)
        {
            printf("Input tidak sesuai\n");
        }

    } while (strcmp(Minum.Penyajian, "dingin") != 0 && strcmp(Minum.Penyajian, "panas") != 0 && strcmp(Minum.Penyajian, "hangat") != 0);

    //tambah validasi y/n

    Minum.harga = strlen(Minum.Size) * strlen(Minum.NamaMinuman) * strlen(Minum.Penyajian) * 100;

    fprintf(fptr, "\n%s\t%s\t%s\t\t%d", Minum.NamaMinuman, Minum.Size, Minum.Penyajian, Minum.harga);
    fclose(fptr);

    return 0;
}