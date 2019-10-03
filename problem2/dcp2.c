#include <stdio.h>

#define SIZE (5)

void w_division(int* const arr)
{
    int prod = 1;
    for (size_t i=0; i<SIZE; ++i) 
    {
        prod *= arr[i];
    }

    for (size_t i=0; i<SIZE; ++i) 
    {
        arr[i] = prod / arr[i];
    }
}

void wo_division(int* const arr)
{
    int newArr[SIZE] = {0};

    for (size_t i=0; i<SIZE; ++i)
    {
        int prod = 1;
        for (size_t j=0; j<SIZE; ++j) 
        {
            if (i != j)
            {
                prod *= arr[j];
            }
        }
        newArr[i] = prod;
    }

    for (size_t i=0; i<SIZE; ++i)
    {
        arr[i] = newArr[i];
    }
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    w_division(arr);

    printf("[");
    for (size_t i=0; i<SIZE-1; ++i)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[SIZE-1]);

    int arr2[] = {1, 2, 3, 4, 5};
    wo_division(arr2);

    printf("[");
    for (size_t i=0; i<SIZE-1; ++i)
    {
        printf("%d, ", arr2[i]);
    }
    printf("%d]\n", arr2[SIZE-1]);
    return 0;
}
