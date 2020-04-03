/*
 * B - Common Raccoon vs Monster
 * @author: Mui
 * @date: April 3rd, 2020
 * @ref: https://atcoder.jp/contests/abc153/tasks/abc153_b?lang=ja
 */

#include <stdio.h>

int main(h, n, t, s)
{
    s=0;
    scanf("%d%d", &h, &n);
    while(n--)
    {
        scanf("%d", &t);
        s+=t;
        if(s>=h) 
        {
            break;
        }
    }

    printf("%s\n", (s>=h)?"Yes":"No");

    return 0;
}
