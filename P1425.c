#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (b <= d)
    {
        e = c - a;
        f = d - b;
    }
    else
    {
        e = c - a - 1;
        f = d - b + 60;
    }
    printf("%d %d\n", e, f);
    return 0;
}
