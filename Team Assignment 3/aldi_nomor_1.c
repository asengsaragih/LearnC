#include <stdio.h>

struct horoscope
{
    char name[15];
    int startdate;
    int enddate;
    int startmonth;
    int endmonth;
};

int main()
{
    //defined horoscope
    struct horoscope hs[12] = {
        {"Aries", 21, 19, 3, 4},
        {"Taurus", 20, 20, 4, 5},
        {"Gemini", 21, 20, 5, 6},
        {"Cancer", 21, 22, 6, 7},
        {"Leo", 23, 22, 7, 8},
        {"Virgo", 23, 22, 8, 9},
        {"Libra", 23, 22, 9, 10},
        {"Scorpio", 23, 21, 10, 11},
        {"Sagitarius", 22, 21, 11, 12},
        {"Capricorn", 22, 19, 12, 1},
        {"Aquarius", 21, 18, 1, 2},
        {"Pisces", 19, 20, 2, 3}
        };

    //temporary variable for name and date of birth
    char name[4];
    int datebirth;
    int monthbirth;
    int yearbirth;

    // get name and birth of date from user
    printf("Masukkan nama : ");
    scanf("%s", &name);

    printf("Tanggal lahir (1-31) : ");
    scanf("%d", &datebirth);

    printf("Bulan lahir (1-12) : ");
    scanf("%d", &monthbirth);

    printf("Tahun lahir : ");
    scanf("%d", &yearbirth);

    //output
    for (int i = 0; i < 12; i++)
    {
        if ((hs[i].startmonth == monthbirth && datebirth >= hs[i].startdate) || (hs[i].endmonth == monthbirth && datebirth <= hs[i].enddate))
        {
            printf("Nama : %s\n", name);
            printf("Bintang : %s\n", hs[i].name);
            printf("Tanggal Lahir : %d-%d-%d", datebirth, monthbirth, yearbirth);
            break;
        }
    }

    return 0;
}