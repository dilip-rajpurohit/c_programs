#include <stdio.h>
int details(char ty, char pack, int ps);
void totalamt(char ty, char pack, int ps);
int main()
{
    char ty, pack;
    int ps;
    printf("select type of yatra\nK -- Karnatak Special\nM -- Manasarovar yatra\nV -- Vaishnodevi economy\nG -- Gujarat rann utsav\n");
    scanf(" %c", &ty);
    printf("\n\nsleclet the packages\np -- premium\nc -- classic\nb -- basic\n");
    scanf(" %c", &pack);
    printf("enter the number of passengers\n");
    scanf("%d", &ps);
    totalamt(ty, pack, ps);
    return 0;
}
int details(char ty, char pack, int ps)
{
    if (ty == 'k')
    {
        printf("yatra : Karnatak Special\n");
    }
    else if (ty == 'm')
    {
        printf("yatra : Manasarovar yatra\n");
    }
    else if(ty == 'v')
    {
        printf("yatra : Vaishnodevi economy\n");
    }
    else if (ty == 'g')
    {
        printf("yatra : Gujarat rann utsav\n");
    }
    printf("package : %c\n",pack);
    printf("passenger : %d\n",ps);
}
void totalamt(char ty, char pack, int ps)
{
    printf("\n");
    details(ty,pack,ps);
    if (ty == 'k')
    {
        if (pack == 'p')
        {
            printf("total amt = %d\n", 10000 * ps);
        }
        else if (pack == 'c')
        {
            printf("total amt = %d\n", 8000 * ps);
        }
        else if (pack == 'b')
        {
            printf("total amt = %d\n", 5000 * ps);
        }
    }
    else if (ty == 'm' || ty == 'v')
    {
        if (pack == 'p')
        {
            printf("total amt = %d\n", 20000 * ps);
        }
        else if (pack == 'c')
        {
            printf("total amt = %d\n", 15000 * ps);
        }
        else if (pack == 'b')
        {
            printf("total amt = %d\n", 10000 * ps);
        }
    }
    else if (ty == 'g')
    {
        if (pack == 'p')
        {
            printf("total amt = %d\n", 25000 * ps);
        }
        else if (pack == 'c')
        {
            printf("total amt = %d\n", 10000 * ps);
        }
        else if (pack == 'b')
        {
            printf("total amt = %d\n", 7000 * ps);
        }
    }
}
