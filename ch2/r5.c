#include <stdio.h>
int typebeve(char bt, int q);
int main()
{
    char bt;
    int q;
    printf("please select the beverage type\n\nB - Badam milk\t\t rs 25\nC - Chocolate milk\t rs 30\nS - Strawberry milk\t rs 50\nM - Mango\t\t rs 45\n>\n");
    scanf("%c", &bt);
    printf("enter the quantity\n");
    scanf("%d", &q);
    typebeve(bt, q);
    return 0;
}

int typebeve(char bt, int q)
{
    switch (bt)
    {
    case 'b':
        printf("total amt: %d\n", q * 25 + 1);
        break;
    case 'c':
        printf("total amt: %d\n", q * 30 + 1);
        break;
    case 's':
        printf("total amt: %d\n", q * 50 + 1);
        break;
    case 'm':
        printf("total amt: %d\n", q * 45 + 1);
        break;
    default:
        printf("invalid input\n");
    }
}