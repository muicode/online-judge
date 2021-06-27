#include <stdio.h>
#include <stdlib.h>

static int v[1001];
static inline int comparator(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );
}

int main(int n, int m, float t)
{
    t=0;
    scanf("%d%d", &n, &m);
    for(int i=0;i<n;++i)
    {
        scanf("%d", &v[i]);
        t+=v[i];
    }

    qsort(v, n, sizeof(int), comparator);

    t /= (4*m);
    printf("%s\n", (v[n-m]>=t) ? "Yes" : "No");
    return 0;
}
