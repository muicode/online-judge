#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, k;
    unsigned long long na = 0;
    scanf("%d %d", &n, &k);

    if (k >= n)
    {
        printf("0\n");
    }
    else
    {
        vector<int> hv;
        while (n--)
        {
            int h;
            scanf("%d", &h);
            hv.push_back(h);
        }

        sort(hv.begin(), hv.end());

        n = hv.size() - k;

        for (int i=0; i<n; ++i)
        {
            na += hv[i];
        }
        printf("%llu\n", na);
    }

    return 0;
}
