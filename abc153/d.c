/*
 * D - Caracal vs Monster
 * @author: Mui
 * @date: April 5th, 2020
 * @ref: https://atcoder.jp/contests/abc153/tasks/abc153_d
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	long h;
	scanf("%ld", &h);
    h = log(h) / log(2) + 1;
	printf("%ld\n", ((long)1 << h)-1);
	return 0;
}
