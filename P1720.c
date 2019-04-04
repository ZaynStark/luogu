#include <stdio.h>
int main()
{
    float a[50];
    int i;
    int n;
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    scanf("%d", &n);
    for (i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%.2f", a[n]);
    return 0;
}