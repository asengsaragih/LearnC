#include <stdio.h>
#include <stdlib.h>

void one();
void two();
void three();

struct Mahasiswa *mahasiswas;
struct Nilai *nilais;

struct Mahasiswa
{
    char nim[10];
    char name[100];
    char matkul[100];
};

struct Nilai
{
    double hadir;
    double tugas;
    double quiz;
    double forum;
    double uas;
};

void resizeArrayMahasiswas(size_t n)
{
    /* TODO: Handle reallocations errors. */
    mahasiswas = realloc(mahasiswas, n * sizeof *mahasiswas);
}

void resizeArrayNilai(size_t n)
{
    /* TODO: Handle reallocations errors. */
    nilais = realloc(nilais, n * sizeof *nilais);
}

//main program
void main()
{
    printf("NILAI AKHIR MAHASISWA\n\n");

    do
    {
        int i;
        printf("1. Input data mahasiswa\n");
        printf("2. Input nilai\n");
        printf("3. Status dan Nilai mahasiswa\n");
        printf("4. Keluar dari program\n\n");
        printf("Masukkan pilihan : ");

        scanf("%d", &i);
        printf("\n");

        if (i == 1) {
            resizeArrayMahasiswas(1);
            one(mahasiswas);
        } else if (i == 2) {
            resizeArrayNilai(1);
            two(nilais);
        } else if (i == 3) {
            three();
        } else if (i == 4) {
            break;
        } else {
            //for new line
            printf("\n");
        }

    } while (1);
}

//untuk menu pertama
void one(struct Mahasiswa *mahasiswas) 
{
    //insert to array parameter
    int i = (int) (sizeof(mahasiswas) / sizeof(mahasiswas[0]));
    
    if (i > 0)
        i++;

    printf("Nim : ");
    scanf("%s", mahasiswas[i].nim);

    printf("Nama : ");
    scanf("%s", mahasiswas[i].name);

    printf("Matkul : ");
    scanf("%s", mahasiswas[i].matkul);

    printf("\nData Tersimpan\n\n");
}

//untuk menu kedua
void two(struct Nilai *nilais) 
{
    printf("two");
}

//untuk menu ketiga
void three() 
{
    printf("three");
}

