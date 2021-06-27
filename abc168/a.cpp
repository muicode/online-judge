/* 
 * A - Therefore
 * @author: jioneeu
 * @date: May 30th 2020
 * @ref: https://atcoder.jp/contests/abc168/tasks/abc168_a
 */

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	switch(n%10) 
	{
		case 2:
		case 4:
		case 5:
		case 7:
		case 9:
			printf("hon\n");
			break;
		case 0:
		case 1:
		case 6:
		case 8:
			printf("pon\n");
			break;
		case 3:
			printf("bon\n");
	}

	return 0;
}
