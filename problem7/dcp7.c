#include <stdio.h>
#include <string.h>

_Bool decodable(char *s)
{
    int n = (s[0]-'0') * 10 + s[1]-'0';
    return n <= 26;
}

int decode(char *s)
{
    size_t size = strlen(s);
    int n;
    int cnt = 0;

    switch(size)
    {
        case 1:
            return 1;
        case 2:
            sscanf(s, "%d", &n);
            return (n >= 1 && n <= 26) ? 2 : 1;
        default:
            return decode(s+1) + (decodable(s) ? decode(s+2) : 0);
    }
}

int main(void)
{
    printf("%-5d:%3d\n", 1, decode("1"));
    printf("%-5d:%3d\n", 11, decode("11"));
    printf("%-5d:%3d\n", 111, decode("111"));
    printf("%-5d:%3d\n", 1111, decode("1111"));
    printf("%-5d:%3d\n", 4123, decode("4123"));
    return 0;
}
