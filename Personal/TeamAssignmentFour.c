#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Drink *drinks;

struct Drink
{
    char name[6];
    char size[6];
    char type[6];
    double price;
};

void resizeArrayDrinks()
{
    drinks = realloc(drinks, 1 * sizeof *drinks);
}

void create();
void view();
void delete ();

void main()
{
    printf("Coffeshop Program\n\n");

    do
    {
        int i;
        printf("1. Input data\n");
        printf("2. View History\n");
        printf("3. Delete history\n");
        printf("4. Exit\n\n");
        printf("Masukkan pilihan : ");

        scanf("%d", &i);
        printf("\n");

        if (i == 1)
        {
            resizeArrayDrinks();
            create();
        }
        else if (i == 2)
        {
            view();
        }
        else if (i == 3)
        {
            delete ();
        }
        else if (i == 4)
        {
            printf("Goodbye");
            break;
        }
    } while (1);
}

//function for view items
void view()
{
}

//function for adding items
void create()
{
    const char *vName[] = {"kopi", "teh", "coklat", "soda"}; //validate name
    const char *vSize[] = {"small", "medium", "large"};      //validate size
    const char *vType[] = {"dingin", "panas", "hangat"};     //validate size

    char name[20];
    char size[20];
    char type[20];

    FILE *fp;

    do
    {
        printf("Masukkan nama minuman : ");
        scanf("%s", &name);

        int success = 0;

        for (int i = 0; i < 4; i++)
        {
            if (!strcmp(vName[i], name))
            {
                success = 1;
                break;
            }
        }

        if (success == 1)
        {
            break;
        }
        else
        {
            printf("inputan harus kopi, teh, coklat atau soda\n");
        }

    } while (1);

    do
    {
        printf("Masukkan jenis ukuran : ");
        scanf("%s", &size);

        int success = 0;

        for (int i = 0; i < 4; i++)
        {
            if (!strcmp(vSize[i], size))
            {
                success = 1;
                break;
            }
        }

        if (success == 1)
        {
            break;
        }
        else
        {
            printf("inputan harus small, medium atau large\n");
        }

    } while (1);

    do
    {
        printf("Masukkan jenis penyajian : ");
        scanf("%s", &type);

        int success = 0;

        for (int i = 0; i < 4; i++)
        {
            if (!strcmp(vType[i], type))
            {
                success = 1;
                break;
            }
        }

        if (success == 1)
        {
            break;
        }
        else
        {
            printf("inputan harus panas, dingin atau hangat\n");
        }

    } while (1);

    //insert to array parameter
    int i = (int)(sizeof(drinks) / sizeof(drinks[0]));

    if (i > 0)
        i++;

    double price = strlen(name) * strlen(size) * strlen(type) * 100;

    printf("\nNama minuman: %s\nSize: %s\nPenyajian: %s\nHarga: %0.2f\n\nTambahkan kedalam daftar menu? (y/n): ", name, size, type, price);

    char answer;
    do
    {
        scanf(" %c", &answer);

        if (answer == 'y')
        {
            strcpy(drinks[i].name, name);
            strcpy(drinks[i].size, size);
            strcpy(drinks[i].type, type);

            drinks[i].price = price;

            fp = fopen("dataminuman.txt", "a");
            if (fp == NULL)
            {
                fp = fopen("dataminuman.txt", "w");
                printf("Error! dataminuman.txt tidak ada");
            }
            fprintf(fp, "\n%d\t%s\t%s\t%s\t\t%d", drinks[i].name, drinks[i].size, drinks[i].type, drinks[i].price);
            fclose(fp);

            printf("\nData Tersimpan\n\n");
            break;
        }
        else if (answer == 'n')
        {
            printf("\nData tidak tersimpan\n\n");
            break;
        }

    } while (answer != 'y' && answer != 'n');
}

void delete ()
{
}