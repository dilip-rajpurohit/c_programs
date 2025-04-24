#include<stdio.h>
#include<stdlib.h>
int price(char ch);
int main()
{
    char ch;
    printf("select beverages\nA -- Apple Milk Shake\t\trs 25\nK -- Kiwi juice\t\t\trs 30\nS -- Strawberry Milk Shake\trs 50\nM -- mango juice\t\trs 45\nO -- Orange Juice\t\trs 60\nW -- watermelon Juice\t\trs 40\n");
    scanf("%c",&ch);
    price(ch);
    return 0;
}
int price(char ch)
{
    int p,q;
    if(ch=='a'||ch=='k'||ch=='s'||ch=='m'||ch=='o'||ch=='w')
    {
        printf("enter the quantity\n");
        scanf("%d",&q);
        switch(ch)
        {
            case 'a':p=25*q; 
            break;
            case 'k':p=30*q;
            break;
            case 's':p=50*q;
            break;
            case 'm':p=45*q;
            break;
            case 'o':p=60*q;
            break;
            case 'w':p=40*q;
            break;
        }
        printf("total amt : %d\n",p);
    }
    else 
    printf("invalid input\n");

}