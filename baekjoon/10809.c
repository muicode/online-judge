#include <stdio.h>

int main(void)
{
    char s[101];
    int freq[26] = {0};
    for (int i=0; i<27; ++i)
        freq[i] = -1;
    scanf("%s", s);

    for (int i=0; s[i]; ++i)
    {
        if (freq[s[i]-'a'] == -1)
            freq[s[i]-'a'] = i;
    }

    for (int i=0; i<26; ++i)
        printf("%d ", freq[i]);
    printf("\n");

    return 0;
}
