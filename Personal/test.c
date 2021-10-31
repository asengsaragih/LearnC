#include <stdio.h>
int main()
{
    FILE *fileku;
    int A[] = {1, 2, 3, 4, 5};
    fileku = fopen("fileku.txt", "w");
    if (fileku == NULL)
    {
        printf("File tidak bisa di buka");
        return 0;
    }
    fwrite(A, sizeof(A), 7, fileku);
    fclose(fileku);
    return 0;
}