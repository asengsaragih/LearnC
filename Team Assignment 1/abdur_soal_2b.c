#include <stdio.h>
#include <string.h>

int main()
{
    char kal1[100],kal2[100];
    int i,j1,j2;
    
    
    printf("Masukkan kalimat 1 : ");
    scanf("%s",kal1);
    
    printf("Masukkan kalimat 2 : ");
    scanf("%s",kal2);
    
    j1 = strlen(kal1);
    j2 = strlen(kal2);
    strcat(kal1," ");
    strcat(kal1,kal2);
    printf("\n\nGabungan 2 buah inputan : ");
    printf("%s\n",kal1);
    printf("Hasil membalik kalimat gabungan : ");
    for (i = strlen(kal1)-1; i >=0  ; i--)
    {
        printf("%c",kal1[i]);
    }
    
    printf("\nJumlah Huruf kalimat pertama : %d\n",j1);
    
    printf("Jumlah Huruf kalimat kedua : %d\n",j2);
    
    printf("Total Jumlah huruf : %d\n",j1+j2);
    
    printf("Total Perkalian kalimat : %d\n",j1*j2);

    return 0;
}
