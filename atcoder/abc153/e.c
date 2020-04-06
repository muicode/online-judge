/*
 * E - Crested Ibis vs Monster
 * @author: Mui
 * @date: April 4th, 2020
 * @ref: https://atcoder.jp/contests/abc153/tasks/abc153_e
 */

#include <stdio.h>

#define rep(i, s, c) for (int i=s; i<c; ++i)
#define min(a, b) ((a)<(b)) ? (a) : (b)
#define max(a, b) ((a)>(b)) ? (a) : (b)
#define INF 100000005

/*A: Damage    B: Magic Points*/
int A[1000], B[1000];
int dp[10001] = {0};

int main(H, N)
{
    scanf("%d %d", &H, &N);
    rep(i, 0, N)
        scanf("%d %d", &A[i], &B[i]);

    rep(h, 1, H+1)
        dp[h] = INF;

    rep(h, 1, H+1)
        rep(n, 0, N)
            dp[h] = min(dp[h], B[n] + dp[max(h-A[n], 0)]);


    printf("%d\n", dp[H]);
    return 0;
}
