#include <stdio.h>

int main(void)
{
    unsigned long long h, c=0;
    scanf("%llu", &h);

    while (h>0)
    {
        h >>= 1;
        ++c;
    }

    printf("%llu\n", ((unsigned long long)(1) << c)-1);
    return 0;
}
