#include <stdio.h>

int hansoo(int n)
{
    if (n < 100) return n;
    if (n <= 110) return 99;

    int cnt = 100;
    for (int i=112; i<=n; ++i)
    {
        int uh = (i/100) - ((i/10)%10);
        int lh = (i/10)%10 - (i%10);

        if (uh == lh) ++cnt;
    }

    return cnt;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d\n", hansoo(n));
    return 0;
}
