#include <stdio.h>
int main()
{
    long long n;
    long long k;
    long long m;
    long long sum;
    scanf("%lld %lld", &n, &k);
    sum = n;
    m = sum;
    while (m - k >= 0)
    {
        m = m - k;
        sum++;
        m++;
    }

    printf("%lld", sum);
    return 0;
}