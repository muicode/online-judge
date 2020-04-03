/*
 * B - Common Raccoon vs Monster
 * @author: Mui
 * @date: April 3rd, 2020
 * @ref: https://atcoder.jp/contests/abc153/tasks/abc153_b?lang=ja
 */

#include <stdio.h>

int main(h, n, t, s)
{
//    int h, n;
//    int s=0;
    s=0;
    scanf("%d%d", &h, &n);
    while(n--)
    {
 //       int t;
        scanf("%d", &t);
        s+=t;
        if(s>=h) break;
    }

    printf("%s\n", (s>=h)?"Yes":"No");

    return 0;
}
