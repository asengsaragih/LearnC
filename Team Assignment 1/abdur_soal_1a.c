#include <stdio.h>

int main()
{
    int i;

    do
    {
        printf("Masukkan angka ganjil : ");
        scanf("%d", &i);
    } while (i % 2 == 0);

    printf("Angka %d masukkan merupakan angka ganjil ", i);
    return 0;
}
