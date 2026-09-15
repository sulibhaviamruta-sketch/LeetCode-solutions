#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char** strs, int strsSize, char* result)
{
    int index = 0;

    while (strs[0][index] != '\0')
    {
        char current = strs[0][index];

        for (int i = 1; i < strsSize; i++)
        {
            if (strs[i][index] != current || strs[i][index] == '\0')
            {
                result[index] = '\0';
                return;
            }
        }

        result[index] = current;
        index++;
    }

    result[index] = '\0';
}

int main()
{
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char* strs[] = {str1, str2, str3};

    char result[100];

    longestCommonPrefix(strs, 3, result);

    printf("Longest Common Prefix: %s\n", result);

    return 0;
}