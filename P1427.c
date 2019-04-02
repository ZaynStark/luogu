#include <stdio.h>
int main()
{
    int a[100];
    int i = 0;
    int j;
    while (scanf("%d", &a[i++]))
    {
        if (a[i - 1] == 0)
            break;
    }

    for (j = i - 2; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }
    return 0;
}