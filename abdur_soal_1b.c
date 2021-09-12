#include <stdio.h>

int main()
{
    int i;

    do
    {
        printf("Masukkan angka genap : ");
        scanf("%d", &i);
    } while (i % 2 != 0);

    printf("Angka %d masukkan merupakan angka Genap ", i);
    return 0;
}
