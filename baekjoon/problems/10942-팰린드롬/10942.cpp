#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

const int SIZE (2002);

bool table[SIZE][SIZE];
int str[SIZE - 2];

void longestPalindrome(int start, int end)
{
    size_t size = end;
    if (size == 1)
    {
        return;
    }
    
    memset(table, 0, sizeof(table));
    for (int i=0; i<size; ++i)
    {
        table[i][i] = true;
    }      

    for (int i=0; i<size-1; ++i)
    {
        if (str[i] == str[i+1])
        {
            table[i][i+1] = true;
        }
    }
    
    for (int k=3; k<=size; ++k)
    {
        for (int i=0; i<size-k+1; ++i)
        {
            int j = k - 1 + i;

            if (table[i+1][j-1] == true && str[i] == str[j])
            {
                table[i][j] = true;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; ++i)
    {
        scanf("%d", &str[i]);
    }

    longestPalindrome(0, n);

    int m;
    scanf("%d", &m);
    for (int i=0; i<m; ++i)
    {
        int s, e;
        scanf("%d %d", &s, &e);
        printf("%d\n", table[s-1][e-1] ? 1 : 0);
    }

    return 0;
}
