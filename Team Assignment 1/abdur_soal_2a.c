#include <stdio.h>

int main()
{
    int bil1,bil2;
    float rata;
    
    printf("Masukkan bilangan pertama : ");
    scanf("%d",&bil1);
    printf("Masukkan bilangan kedua : ");
    scanf("%d",&bil2);
    
    printf("Penjumlahan \n");
    printf("%d + %d = %d\n",bil1,bil2,bil1+bil2);
    
    printf("\nRata - Rata \n");
    rata = ((float)bil1+(float)bil2)/2;
    printf("(%d + %d)/2 = %.2f\n",bil1,bil2,rata);
    
    printf("\nKuadrat \n");
    printf("%d^2 = %d \n%d^2 = %d",bil1,bil1*bil1,bil2,bil2*bil2);
    return 0;

    return 0;
}
