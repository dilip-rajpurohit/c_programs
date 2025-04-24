#include<stdio.h>
int brightness(int);
int main()
{
    int watts;
    printf("enter the watts\n");
    scanf("%d",&watts);
    brightness(watts);
    return 0;
}
int brightness(int watts)
{
    printf("brightness : ");
    switch(watts)
    {
        case 15 ...24 :printf("125");
        break;
        case 25 ...39 :printf("215");
        break;
        case 40 ...59 :printf("500");
        break;
        case 60 ...74 :printf("880");
        break;
        case 75 ...99 :printf("1000");
        break;
        case 100 :printf("1675");
        break;
        default: printf("-1");
    }
    printf(" lumens\n");
}