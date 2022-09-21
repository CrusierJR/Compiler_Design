#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int count = 0;

struct symboltable
{
    char label[20];
    int addr;
} symbol[50];

void insert();
int search(char *);
void display();
void modify();
void main()
{
    int ch, val;
    char lab[10];
    
    do
    {
        printf("\n1.insert\n2.display\n3.search\n4.modify\n5.exit\n");
        printf("\nEnter any choice from above : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\nenter the label : ");
            scanf("%s", lab);
            val = search(lab);
            if (val == 1)
                printf("\nlabel is found...\n");
            else
                printf("\nlabel is not found\n");
            break;
        case 4:
            modify();
            break;
        case 5:
            exit(0);
            break;
        }
    } while (ch < 5);
}
void insert()
{
    int val;
    char lab[10];
    printf("enter the label : ");
    scanf("%s", lab);
    val = search(lab);
    if (val == 1)
        printf("duplicate symbol\n\n");
    else
    {
        strcpy(symbol[count].label, lab);
        printf("enter the address : ");
        scanf("%d", &symbol[count].addr);
        count++;
    }
}
int search(char *s)
{
    int count2 = 0, i;
    for (i = 0; i < count; i++)
    {
        if (strcmp(symbol[i].label, s) == 0)
            count2 = 1;
    }
    return count2;
}
void modify()
{
    int val, ad, i;
    char lab[10];
    printf("enter the label : ");
    scanf("%s", lab);
    val = search(lab);
    if (val == 0)
        printf("no such symbol...");
    else
    {
        printf("label is found...\n\n");
        printf("enter the address : ");
        scanf("%d", &ad);
        for (i = 0; i < count; i++)
        {
            if (strcmp(symbol[i].label, lab) == 0)
                symbol[i].addr = ad;
        }
    }
}
void display()
{
    int i;
    printf("-------------------------\n");
    printf("| LABEL |    ADDRESS    |\n");
    printf("|-------|---------------|\n");
    for (i = 0; i < count; i++)
        printf("| %s\t|\t%d\t|\n", symbol[i].label, symbol[i].addr);
    printf("-------------------------\n");
}