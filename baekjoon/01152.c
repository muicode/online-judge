#include <stdio.h>

int main(void)
{
    char ch;
    _Bool isWord = 0;
    int cnt = 0;

    while ((scanf("%c", &ch) != EOF))
    {
        if (ch == ' ' && isWord == 0)
            continue;
        if (ch == ' ' && isWord)
        {
            ++cnt;
            isWord = 0;
        }
        if (ch != ' ' && ch != '\0' && ch != '\n')
            isWord = 1;
    }

    if (isWord == 1) ++cnt;

    printf("%d\n", cnt);
    return 0;
}
