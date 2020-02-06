#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char s[21];
        int r;
        scanf("%d %s", &r, s);

        for (int i=0; s[i]; ++i)
        {
            for (int j=0; j<r; ++j)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
