#include <stdio.h>

int main(void)
{
    char s[] = "22233344455566677778889999";
    char str[16];
    scanf("%s", str);

    int t = 0;
    for (int i=0; str[i]; ++i)
    {
        t += (s[str[i]-'A']-'0')+1;
    }

    printf("%d\n", t);

    return 0;
}
