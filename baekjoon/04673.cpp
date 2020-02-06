#include <stdio.h>

#define SIZE 10001
bool sn[SIZE] = {0};

void d(int n)
{
    while (n < SIZE)
    {
        int temp = n;
        while (temp>0)
        {
            n += temp%10;
            temp/=10;
        }
        sn[n] = 1;
    }
}

int main(void)
{
    for (int i=1; i< SIZE; ++i)
    {
        if (sn[i] == 1) 
            continue;
        printf("%d\n", i);
        d(i);
    }
}
