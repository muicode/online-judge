#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int o = a%10;
    int t = a%100 - o;
    int h = a/100 * 100;

    int x = b%10;
    int answer = (x*h) + (x*t) + (x*o);
    int temp = answer;
    printf("%d\n", answer);

    x = b%100/10;
    answer = (x*h) + (x*t) + (x*o);
    temp += (answer*10);
    printf("%d\n", answer);

    x = b/100;
    answer = (x*h) + (x*t) + (x*o);
    temp += (answer*100);
    printf("%d\n", answer);
    printf("%d\n", temp);
    return 0;
}
