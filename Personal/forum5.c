#include <stdio.h>

enum dayType
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{

    enum dayType day;

    for (day = Sunday; day <= Saturday; day++)
    {

        printf("%d", day);
    }

    return 0;
}