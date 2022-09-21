#include <stdio.h>
#include <string.h>
#include <conio.h>

struct op
{
    char l;
    char r[20];
} op[10], pr[10];

int main()
{
    int n, i, j, z = 0;
    char temp;
    char *p;
    printf("Enter the no of values : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\tLeft : \t");
        op[i].l = getche();
        printf("\tRight : \t");
        scanf("%s", op[i].r);
    }
    printf("Intermediate Code\n\n");
    for (i = 0; i < n; i++) 
    {
        printf("%c=", op[i].l);
        printf("%ss\n", op[i].r);
    }
    for (i = 0; i < n; i++)
    {
        temp = op[i].l;
        for (j = 0; j < n; j++)
        {
            p = strchr(op[i].r, temp);
            if (p)
            {
                pr[z].l = op[i].l;
                strcpy(pr[z].r, op[i].r);
                z++;
            }
        }
    }
    
}
