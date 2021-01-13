#include <stdio.h>

int main()
{
    int i, j, k;

    k = 6;

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < i; j++)
            printf("  ");

        for (j = i; j < k; j++)
            printf(" *");

        printf("\n");
    }

    return 0;
}