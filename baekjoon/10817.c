#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);

    if(a>=b && a>=c)
    {
        printf("%d\n", (b>c) ? b : c);
    }
    else if(b>=a && b>=c)
    {
        printf("%d\n", (a>c) ? a : c);
    }
    else if(c>=a && c>=b)
    {
        printf("%d\n", (a>b) ? a : b);
    }
    return 0;
}
