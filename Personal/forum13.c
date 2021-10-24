#include <stdio.h>
#define batas 10
static int kali = 0;
void naik()
{
    kali = ++kali;
}
void turun()
{
    kali = --kali;
}
int main()
{
    int i;
    void (*kerjakan)();
    do
    {
        printf("\nMasukkan angka (ketik 10 untuk berhenti): ");
        scanf("%d", &i);
        if (i == batas)
        {
            break;
        }
        else
        {
            if (i > batas)
            {
                kerjakan = naik;
            }
            else
            {
                kerjakan = turun;
            }
            kerjakan();
        }
    } while (1);
    printf("Hasilnya adalah : %d", kali);
    return 0;
}