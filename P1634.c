#include <stdio.h>
int main()
{
    long long x;
    long long n;
    long long sum = 1;
    int i;
    scanf("%lld %lld", &x, &n);
    for (i = 0; i < n; i++)
    {
        sum = sum + sum * x;
    }
    printf("%lld", sum);
    return 0;
}