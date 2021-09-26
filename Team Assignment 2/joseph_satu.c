#include <stdio.h>

int main(int argc, char const *argv[])
{
    int time, diskon=0,biayaperjam=2000,totalbiaya;
    printf("Billing Game Online\n");
    printf("Lama menggunakan:");
    scanf("%d",&time);

    if(time>5)
    {
        diskon=1;
    }
    totalbiaya=biayaperjam*time;
    if(diskon==1)
    {
        totalbiaya=totalbiaya-totalbiaya/5;
    }

    printf("Total biaya: Rp%d,00",totalbiaya);


    return 0;
}
