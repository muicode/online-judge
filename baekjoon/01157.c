#include <stdio.h>

char s[1000001];

int main(void)
{
    int freq[26] = {0};
    scanf("%s", s);

    for (int i=0; s[i]; ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

        ++freq[s[i]-'a'];
    }

    int max = -1;
    char c;
    int cnt = 1;
    for (int i=0; i<26; ++i)
    {
        if (freq[i] > max) max = freq[i], c='A'+i, cnt=1;
        else if (freq[i] == max) ++cnt;
    }

    printf("%c\n", (cnt==1) ? c : '?');

    return 0;
}
