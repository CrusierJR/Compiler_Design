#include <stdio.h>
#include <string.h>

int main()
{
    char string[30];
    
    printf("\n\nEnter the string : ");
    scanf("%s",&string);

    if ((string[0] >=97 && string[0] <=122))
    {
        printf("The given string is a valid identifer...\n\n");
    }
    else
    {
        printf("The given string is not a valid identifer...\n\n");
    }
    return 0;
}
