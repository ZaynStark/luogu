#include <stdio.h>
int main()
{
    int a[10];
    int b[10];
    int c[42];
    int i;
    int j;
    int k;
    int count = 0;
    int m;
    for (m = 0; m < 42; m++)
    {
        c[m] = -1;
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < 10; j++)
    {
        b[j] = a[j] % 42;
    }

    for (k = 0; k < 10; k++)
    {
        if (c[b[k]] == -1)
        {
            c[b[k]] = k;
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}
