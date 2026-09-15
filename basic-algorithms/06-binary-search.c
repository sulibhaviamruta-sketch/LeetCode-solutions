#include <stdio.h>

int search(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target)
        {
            return middle;
        }
        else if (nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return -1;
}

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    int size = 6;

    int result = search(nums, size, target);

    printf("Target index: %d\n", result);

    return 0;
}