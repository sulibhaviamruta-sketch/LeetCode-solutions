#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t)
{
    int count[256] = {0};

    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        count[(unsigned char)s[i]]++;
    }

    for (i = 0; t[i] != '\0'; i++)
    {
        count[(unsigned char)t[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char s[] = "rat";
    char t[] = "car";
    if (isAnagram(s, t))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}