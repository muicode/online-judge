#include <stdio.h>

int main(void)
{
    int n;
    int cnt = 0;

    scanf("%d", &n);
    while(n--)
    {
        int freq[26] = {0};
        char s[101];
        scanf("%s", s);

        for (int i=0; s[i]; ++i)
        {
            if (s[i] == s[i+1]) 
                continue;
            if (freq[s[i]-'a'] == 0)
                freq[s[i]-'a'] = 1;
            else
                goto End;
        }
        ++cnt;
End:;
    }

    printf("%d\n", cnt);

    return 0;
}
