#include <stdio.h>
int main()
{
    int a;
    int b;
    int price = 19;
    int num;
    scanf("%d %d",&a,&b);
    num = (a*10+b)/price;
    printf("%d\n",num);
    return 0;
}