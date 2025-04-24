#include<stdio.h>
int payment(char ,int);
int main()
{
    char group;
    int average;
    while(1)
    {
        printf("enter the group [A,B,C]\n");
        scanf(" %c",&group);
        printf("enter the average runs of the player\n");
        scanf("%d",&average);
        payment(group,average);
    }
    return 0;
}
int payment(char group,int average)
{
    printf("payment : ");
    if(group=='a')
    {
        switch(average)
        {
           case 0 ...30: printf("20 lakhs\n");
           break; 
           case 31 ...35: printf("50 lakhs\n");
           break; 
           case 36 ...40: printf("1 crore\n");
           break; 
           case 41 ...45: printf("2 crore\n");
           break; 
           case 46 ...100: printf("5 crore\n");
           break;
           default: printf("invaild\n");
        }
    }
    else if(group =='b')
    {
        switch(average)
        {
           case 0 ...30: printf("10 lakhs\n");
           break; 
           case 31 ...35: printf("40 lakhs\n");
           break; 
           case 36 ...40: printf("80 lakhs\n");
           break; 
           case 41 ...45: printf("1 crore\n");
           break; 
           case 46 ...100: printf("2 crore\n");
           break;
           default: printf("invaild\n");
        }
    }
    else if(group=='c')
    {
        switch(average)
        {
           case 0 ...30: printf("5 lakhs\n");
           break; 
           case 31 ...35: printf("30 lakhs\n");
           break; 
           case 36 ...40: printf("60 lakhs\n");
           break; 
           case 41 ...45: printf("80 lakhs\n");
           break; 
           case 46 ...100: printf("1 crore\n");
           break;
           default: printf("invaild\n");
        }
    }
}