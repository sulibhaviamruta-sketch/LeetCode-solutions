#include <stdio.h>

void reverseString(char* s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char s[] = {'a'};

    int size = 1;

    reverseString(s, size);

    printf("Reversed string: ");

    for (int i = 0; i < size; i++)
    {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}