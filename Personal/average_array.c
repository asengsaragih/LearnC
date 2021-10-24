#include <stdio.h>

double averageValue(int totals[]);

int main()
{
    int totals[] = {10, 12, 31, 99, 50};

    double average = averageValue(totals);
    printf("Rata Rata : ");
    printf("%.0f", average);

    return 0;
}

double averageValue(int datas[])
{
    double total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += datas[i];
    }

    return total / 5;
}