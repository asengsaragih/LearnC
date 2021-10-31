#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataInputMinuman
{
    char NamaMinuman[10];
    char Size[10];
    char Penyajian[10];
    int Harga;
} Input;

void InputData()
{
    Input Minum = {0};

    char validate[1] = {0};
    FILE *fp;

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

    do
    {

        Minum.Harga = strlen(Minum.Size) * strlen(Minum.NamaMinuman) * strlen(Minum.Penyajian) * 100;

        printf("\nPesanan adalah:");
        printf("\nNama Minuman:%s", Minum.NamaMinuman);
        printf("\nSize:%s", Minum.Size);
        printf("\nPenyajian:%s", Minum.Penyajian);
        printf("\nHarga:%d\n", Minum.Harga);
        printf("\nValidasi  Tambahkan data(y/n):");
        scanf("%s", &validate);
        if (strcmp(validate, "y") == 0)
        {
            printf("Data ditambahkan\n");
            fp = fopen("dataminuman.txt", "a");
            if (fp == NULL)
            {
                fp= fopen("dataminuman.txt", "w");
                printf("Error! dataminuman.txt tidak ada");
            }
            fprintf(fp,"\n%d\t%s\t%s\t%s\t\t%d", Minum.NamaMinuman, Minum.Size, Minum.Penyajian, Minum.Harga);
            fclose(fp);
        }
        else if (strcmp(validate, "y") != 0 && strcmp(validate, "n") == 0)
        {
            printf("\n Data tidak disimpan\n");
        }
        else
        {
            printf("\nYang anda masukkan tidak sesuai\n");
        }

    } while (strcmp(validate, "y") != 0 && strcmp(validate, "n") != 0);

    
}

void ViewHistory()
{

    char ch;
    FILE *fp;
    int no=0;

    fp = fopen("dataminuman.txt", "r"); // read mode

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("\n\nHistory Pembelian: \n");

    while ((ch = fgetc(fp)) != EOF)
    {
    // if(ch=='\n'){
    //     no++;
    //     printf("%d",no);
    // }

        printf("%c", ch);
    }



    fclose(fp);
}

void DeleteHistory()
{
    FILE *fp;
    int no=0;

    fp = fopen("dataminuman.txt", "w"); // read mode
     fprintf(fp,"\nNo\tNama\tSize\tPenyajian\t\tHarga");
    printf("Data dihapus");
    fclose(fp);
}

int main()
{
    int on = 1;
    int input;
    
  

    do
    {
        printf("\nData Minuman:");
        printf("\na. Input data(1)");
        printf("\nb. View History(2)");
        printf("\nc. Delete History(3)");
        printf("\nd. Exit(4)");
        printf("\npilih:");
        scanf("%d", &input);

        switch (input)
        {
        case 1:

            InputData();
            break;
        case 2:
            printf("b");
            ViewHistory();
            break;
        case 3:
            printf("c");
            DeleteHistory();
            break;
        case 4:
            printf("Terima kasih");
            on = 0;
            break;

        default:
            break;
        }

    } while (on == 1);
}