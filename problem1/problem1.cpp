/******************************************************************************
* 2019-09-18
*******************************************************************************
* DCP #1 
*
* This problem was recently asked by Google.
*
* Given a list of numbers and a number k, return whether any two numbers from 
* the list add up to k.
*
* For example, given [10, 15, 3, 7] and k of 17, 
* return true since 10 + 7 is 17.
*
* Bonus: Can you do this in one pass?
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <map>

using namespace std;

#define SIZE (100)

void bruteforce(const int * const arr, const int k)
{
    for (size_t i = 0; i < SIZE - 1; ++i)
    {
        for (size_t j = i + 1; j < SIZE; ++j)
        {
            if (arr[i] + arr[j] == k)
            {
                printf("found: %d + %d = %d\n", arr[i], arr[j], k);
                return;
            }
        }
    }
    printf("none exists\n");
}

int isInclude(const int * const arr, const int n)
{
    for (size_t i=0; arr[i] != '\0'; ++i)
    {
        if (arr[i] == n) 
        {
            return i;
        }
    }

    return 0;
}

void onepass(const int * const arr, const int k)
{
    map<int, int> mymap;

    for (size_t index = 0; index < SIZE; ++index)
    {
        int complement = k - arr[index];

        if (mymap.find(complement) != mymap.end() && mymap[complement] != index)
        {
                printf("found: %d + %d = %d\n", complement, arr[index], k);
                return;
        }
        else
        {
            mymap[arr[index]] = index;
        }
    }
    printf("none exists\n");
}

int main(void)
{
    int arr[SIZE] = {0};
    size_t k;
    unsigned seed = time(0);
    srand(seed);

    k = (rand() % 20) + 1;

    for (size_t i = 0; i < SIZE; ++i)
    {
        arr[i] = rand() % SIZE + 1;
    }

    printf("k: %ld\n", k);
    bruteforce(arr, k);
    onepass(arr, k);

    return 0;
}
