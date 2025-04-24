#include <stdio.h>
int instruction(char bread_type, char mode, int loaf_size);
int main()
{
    char bread_type, mode;
    int loaf_size;
    printf("enter bread type\nW -- Whitebread\nS -- Sweetbread\n>");
    scanf(" %c", &bread_type);
    printf("enter the baking  mode\nA -- Automated\nM -- Mannual\n>");
    scanf(" %c", &mode);
    printf("enter the loaf size\n1 -- Single\n2 -- Double\n>");
    scanf("%d", &loaf_size);
    instruction(bread_type, mode, loaf_size);
    return 0;
}
int instruction(char bread_type, char mode, int loaf_size)
{
    float extra_time;
    switch (bread_type)
    {
    case 'w':
    {
        printf("1. primary kneading   : 15 mins\n");
        printf("2. primary rising     : 60 mins\n");
        printf("3. secondary kneading : 18 mins\n");
        printf("4. secondary rising   : 20 mins\n");
        printf("5. loaf shaping       : 2 sec\n");
        printf("6. final rising       : 75 mins\n");
        if (mode == 'm')
        {
        printf("Note :- please remove the dough from the\n\tbread machine for manual baking\n");
        }
        if(loaf_size==1)
        {
            extra_time=0;
        }
        else if(loaf_size==2)
        extra_time=0.5*45;
        printf("7. baking             : %.2f mins\n",45+(extra_time));
        printf("8. cooling            : 30 mins\n");
        printf("\nTOTAL TIME : %.3f\n",15+60+18+20+0.033+75+45+extra_time+30);
    }
    break;
    case 's':
    {
        printf("1. primary kneading   : 20 mins\n");
        printf("2. primary rising     : 60 mins\n");
        printf("3. secondary kneading : 33 mins\n");
        printf("4. secondary rising   : 30 mins\n");
        printf("5. loaf shaping       : 2 sec\n");
        printf("6. final rising       : 75 mins\n");
        if (mode == 'm')
        {
        printf("Note :- please remove the dough from the\n\tbread machine for manual baking\n");
        }
        if(loaf_size==1)
        {
            extra_time=0;
        }
        else if(loaf_size==2)
        extra_time=0.5*35;
        printf("7. baking             : %.2f mins\n",35+(extra_time));
        printf("8. cooling            : 30 mins\n");
        printf("\nTOTAL TIME : %.3f\n",20+60+33+30+0.033+75+35+extra_time+30);
    }
    break;
    default:
        printf("invalid input\n");
    }
}