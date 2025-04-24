#include<stdio.h>
float substance(float n);
int main()
{
    float n;
    while(1)
    {
        printf("enter the boiling point\n");
        scanf("%f",&n);
        substance(n);
    }
    return 0;
}

float substance(float n)
{

    if(100-n*(100.0/100)>=-5&&100-n*(100/100.0)<=5)
    {
        printf("Water\n");
    }
    else if((100-n*(100/357.0))>=-5&&(00-n*(100/357.0))<=5)
    {
        printf("Mercury\n");
    }
    else if((100-n*(100/1187.0))>=-5&&(100-n*(100/1187.0))<=5)
    {
        printf("Copper\n");
    }
    else if((100-n*(100/2193.0))>=-5&&(100-n*(100/2193.0))<=5)
    {
        printf("Silver\n");
    }
    else if((100-n*(100/2660.0))>=-5&&(100-n*(100/2660.0))<=5)
    {
        printf("Gold\n");
    }
    else
    {
        printf("Substance unknown\n");
    }
    return 0;
}