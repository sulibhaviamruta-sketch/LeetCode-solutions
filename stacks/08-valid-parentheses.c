#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{')
        {
            top++;
            stack[top] = current;
        }
        else
        {
            if (top == -1)
            {
                return false;
            }

            char opening = stack[top];
            top--;

            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{'))
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main()
{
    char s[] = "";
    if (isValid(s))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}