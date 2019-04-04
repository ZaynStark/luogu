#include <stdio.h>
int a[100];
int b[100];
int main()
{
    int n;
    int i;
    int j;
    int k;
    int l;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < n; j++)
    {
        for (k = 0; k < j; k++)
        {
            if (a[j] > a[k])
            {
                b[j]++;
            }
        }
    }
    for (l = 0; l < n; l++)
    {
        printf("%d ", b[l]);
    }
    return 0;
}