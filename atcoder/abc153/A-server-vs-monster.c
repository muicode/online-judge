#include <stdio.h>

int main(void)
{
    int h, a;
    scanf("%d %d", &h, &a);
    printf("%d\n", (h+a-1)/a);
    return 0;
}
