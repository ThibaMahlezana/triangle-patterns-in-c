#include <stdio.h>

int main()
{
    int i, j, k;

    k = 6;

    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }
    return 1;
}