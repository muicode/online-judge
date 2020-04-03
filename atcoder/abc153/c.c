/*
 * C - Fennec vs Monster
 * @author: Mui
 * @date: April 3rd, 2020
 * @ref: https://atcoder.jp/contests/abc153/tasks/abc153_c
 */

#include <stdio.h>
#include <stdlib.h>

static int h[200000];

int comparator(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );
}

int main(n, k)
{
    scanf("%d%d", &n, &k);

    if(k>=n) 
    {
        printf("0\n");
    }
    else 
    {
        for(int i=0; i<n; ++i)
        { 
            scanf("%d", &h[i]);
        } 

        qsort(h, n, sizeof(int), comparator);

        unsigned long x=0;
        for(int i=n-k-1; i>=0; --i)
        { 
            x += h[i];
        } 

        printf("%lu\n", x);
    }

    return 0;
}
