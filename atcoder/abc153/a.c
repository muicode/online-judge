/* 
 * A - Serval vs Monster 
 * @author: Mui
 * @date: April 3rd, 2020
 * @ref: https://atcoder.jp/contests/abc153/tasks/abc153_a
 */

#include <stdio.h>

int main(void)
{
    int h, a;
    scanf("%d%d", &h, &a);
    printf("%d\n", (h+a-1)/a);
    return 0;
}
