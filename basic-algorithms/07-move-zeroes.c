#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(int* nums, int numsSize)
{
    printf("[");

    for (int i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);

        if (i < numsSize - 1)
        {
            printf(", ");
        }
    }

    printf("]\n");
}

int main()
{
    int nums[] = {0, 0, 0};
    int size = 3;
    printf("Before: ");
    printArray(nums, size);

    moveZeroes(nums, size);

    printf("After: ");
    printArray(nums, size);

    return 0;
}