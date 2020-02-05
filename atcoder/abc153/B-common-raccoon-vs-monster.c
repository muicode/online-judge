#include <stdio.h>

int main(void)
{
	int h, n, t=0;
	scanf("%d %d", &h, &n);
	while(n--)
	{
		int a;
		scanf("%d", &a);
		t+=a;
	}

	printf("%s\n", (t>=h) ? "Yes" : "No");
	return 0;
}

