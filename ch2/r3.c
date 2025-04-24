#include<stdio.h>
void earth_quick(float);
int main()
{
    float n;
    while(1)
    {
        printf("\nenter the Richter Scale no [n]\n");
        scanf("%f",&n);
        earth_quick(n);
    }
    return 0;
}
void earth_quick(float n)
{
    if(n<5)
    {
        printf("Little or no Damage\n");
    }
    else if(5<=n&&n<5.5)
    {
        printf("Somme damage\n");
    }
    else if(5.5<=n&&n<6.5)
    {
        printf("Serious Damage: walls may crack or fall\n");
    }
    else if(6.5<=n&&n<7.5)
    {
        printf("Disaster: houses and bulidings may collapse\n");
    }
    else
    {
        printf("Catastrophe: most bulidings destroyed\n");
    }
}