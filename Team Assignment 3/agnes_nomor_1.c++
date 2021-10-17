#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    char nama[25];
    int tanggal, bulan, tahun;
    cout << "Program Zodiak\n";
    cout << "==========================\n";
    cout << "Masukkan Nama :";
    cin >> nama;
    cout << "Masukkan Tanggal Lahir :";
    cin >> tanggal;
    cout << "Masukkan Bulan Lahir :";
    cin >> bulan;
    cout << "Masukkan Tahun Lahir:";
    cin >> tahun;
    cout << "=========================================\n\n";
    cout << "Nama :" << nama << "\n";
    cout << "Tanggal Lahir: " << tanggal << bulan << tahun << "\n";
    cout << "Bintang :";

    if ((tanggal >= 21 && bulan == 3) || (tanggal <= 19 && bulan == 4))
        cout << "Aries" << endl;
    else if ((tanggal >= 20 && bulan == 4) || (tanggal <= 20 && bulan == 5))
        cout << "Taurus" << endl;
    else if ((tanggal >= 21 && bulan == 5) || (tanggal <= 20 && bulan == 6))
        cout << "Gemini" << endl;
    else if ((tanggal >= 21 && bulan == 6) || (tanggal <= 22 && bulan == 7))
        cout << "Cancer" << endl;
    else if ((tanggal >= 23 && bulan == 7) || (tanggal <= 22 && bulan == 8))
        cout << "Leo" << endl;
    else if ((tanggal >= 23 && bulan == 8) || (tanggal <= 22 && bulan == 9))
        cout << "Virgo" << endl;
    else if ((tanggal >= 23 && bulan == 9) || (tanggal <= 22 && bulan == 10))
        cout << "Libra" << endl;
    else if ((tanggal >= 23 && bulan == 10) || (tanggal <= 21 && bulan == 11))
        cout << "Scorpio" << endl;
    else if ((tanggal >= 22 && bulan == 11) || (tanggal <= 21 && bulan == 12))
        cout << "Sagitarius" << endl;
    else if ((tanggal >= 20 && bulan == 1) || (tanggal <= 18 && bulan == 2))
        cout << "Aquarius" << endl;
    else if ((tanggal >= 19 && bulan == 2) || (tanggal <= 20 && bulan == 3))
        cout << "Pisces" << endl;
    else
        cout << "Coba masukkan kembali data";

    getch();
}
