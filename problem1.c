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

#define SIZE (20)

void bruteforce(const int * const arr, const int k)
{
    for (size_t i = 0; i < SIZE - 1; ++i)
    {
        for (size_t j = i + 1; j < SIZE; ++j)
        {
            if (arr[i] + arr[j] == k)
            {
                printf("found: %d(%ld) + %d(%ld) = %d\n", arr[i], i, arr[j], j, k);
                return;
            }
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

    for (size_t i=0; i<SIZE; ++i)
    {
        arr[i] = (rand() % SIZE) + 1;
        printf("index %2ld: %2d\n", i, arr[i]);
    }

    printf("k: %ld\n", k);
    bruteforce(arr, k);

    return 0;
}
