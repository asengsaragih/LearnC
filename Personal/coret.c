#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    size_t n = 0;

    if (scanf("%zu", &n) == 1)
    {
        scanf("%*[^\n]");
        scanf("%*c");
    }

    char **s = NULL;

    if (n != 0)
        s = calloc(n, sizeof(char *));

    if (s != NULL)
    {
        size_t len = 11;

        size_t m = 0;

        while (m < n && (*(s + m) = malloc(len * sizeof(char))) != NULL)
            m++;

        size_t i = 0;

        while (i < m && fgets(*(s + i), len, stdin) != NULL)
            i++;

        m = i;

        for (i = 0; i < m; i++) //print the strings
        {
            (*(s + i))[strcspn(*(s + i), "\n")] = '\0';
            // or without the subscript operator
            // *( *( s + i ) + strcspn( *( s + i ), "\n" ) ) = '\0';

            puts(*(s + i));
        }

        for (i = 0; i < n; i++)
            free(*(s + i));
    }

    free(s);

    return 0;
}