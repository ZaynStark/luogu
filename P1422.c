#include <stdio.h>
int main()
{
    int n;
    double m;
    scanf("%d", &n);
    if (n <= 150)
    {
        m = n * 0.4463;
    }
    else if (n >= 151 && n <= 400)
    {
        m = 150 * 0.4463 + (n - 150) * 0.4663;
    }
    else
    {
        m = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
    }
    printf("%.1lf", m);
    return 0;
}