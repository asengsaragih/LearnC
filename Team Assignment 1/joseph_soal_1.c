#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x1, y1, jum, kuad1, kuad2;
    float rata;
    
    while (x1 % 2 == 0 || y1 % 2 == 1)
        {
            printf("Masukkan angka ke 1(harus ganjil):");
            scanf("%d", &x1);
            printf("Masukkan angka ke 2(harus genap):");
            scanf("%d", &y1);
        }

    jum = x1 + y1;
    rata = (float)(x1 + y1) / 2;
    kuad1 = pow(x1, 2);
    kuad2 = pow(y1, 2);
    printf("jumlah kedua bilangan:%d\n", jum);
    printf("rata-rata kedua bilangan:%.2f\n", rata);
    printf("kuadrat angka ke 1:%d\n", kuad1);
    printf("kuadrat angka ke 2:%d\n", kuad2);

    return 0;
}
