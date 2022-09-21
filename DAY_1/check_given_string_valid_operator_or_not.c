#include <stdio.h>
#include <string.h>
int main()
{
    char arithmetic[5] = {'+', '-', '*', '/', '%'};
    char relational[4] = {'<', '>', '!', '='};
    char bitwise[5] = {'&', '^', '~', '|'};
    char str[2] = {' ', ' '};
    printf("\n\nEnter value to be identified: ");
    scanf("%s", &str);
    int i;
    if (((str[0] == '&' || str[0] == '|') && str[0] == str[1]) || (str[0] == '!' && str[1] == '\0'))
    {
        printf("\nIt is Logical operator");
    }
    for (i = 0; i < 4; i++)
    {
        if (str[0] == relational[i] && (str[1] == '=' || str[1] == '\0'))
        {
            printf("\n It is releational Operator\n\n");
            break;
        }
    }
    for (i = 0; i < 4; i++)
    {
        if ((str[0] == bitwise[i] && str[1] == '\0') || ((str[0] == '<' || str[0] == '>') && str[1] == str[0]))
        {
            printf("\n It is Bitwise Operator\n\n");
            break;
        }
    }
    if (str[0] == '?' && str[1] == ':')
        printf("\nIt  is  ternary operator\n\n");
    for (i = 0; i < 5; i++)
    {
        if ((str[0] == '+' || str[0] == '-') && str[0] == str[1])
        {
            printf("\nIt is unary operator\n\n");
            break;
        }
        else if ((str[0] == arithmetic[i] && str[1] == '=') || (str[0] == '=' && str[1] == ' '))
        {
            printf("\nIt is Assignment operator\n\n");
            break;
        }
        else if (str[0] == arithmetic[i] && str[1] == '\0')
        {
            printf("\nIt is arithmetic operator\n\n");
            break;
        }
    }
    return 0;
}
