#include <stdio.h>

int main(long long n, long long k, long long x)
{
    scanf("%lld%lld",&n,&k);
    n = n%k;

    x = (n-k)>=0 ? n-k : (n-k)*-1;
    printf("%lld\n", n>x?x:n);
    return 0;
}
