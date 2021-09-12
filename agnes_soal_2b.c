
#include <stdio.h>
int main()
{
  char huruf[1000], hasil[1000];
  int i, jumlahstring, jumlah = 0;

  printf("Gabungan dua buah kalimat = ");
  fgets(huruf, sizeof(huruf), stdin);

  while (huruf[jumlah] != '\0')
  {
    jumlah++;
  }
  jumlahstring = jumlah - 1;
  for (i = 0; i < jumlah; i++)
  {
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }
  hasil[i] = '\0';
  printf("Hasil membalik kalimat gabungan = %s \n", hasil);
  return 0;
}
