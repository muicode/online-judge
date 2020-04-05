/*
 * B - Common Raccoon vs Monster
 * @author: Mui
 * @date: April 3rd, 2020
 * @ref: https://atcoder.jp/contests/abc153/tasks/abc153_b?lang=ja
 */

#include <stdio.h>

int main(h, n, t)
{
    scanf("%d%d", &h, &n);
    while(n-- && h>=0)
    {
        scanf("%d", &t);
        h-=t;
    }

    printf("%s\n", (h<=0)?"Yes":"No");

    return 0;
}
