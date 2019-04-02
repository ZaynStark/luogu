#include <stdio.h>
int main()
{
    long long day;
    long long a;
    long long b;
    long long i;
    long long m = 0;
    long long n = 0;
    scanf("%lld", &day);
    for (i = 0; i < day; i++)
    {
        scanf("%lld %lld", &a, &b);
        n = n + a + b - 8;
        m += n;
    }
    printf("%lld", m);
    return 0;
}