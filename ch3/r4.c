#include<stdio.h>
int div_9(int);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    div_9(n);
    return 0;
}
int div_9(int n)
{
    int digit,sum=0,temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        temp/=10;
        sum=sum+digit;
        printf("\n%d\n",digit);
    }
    if(sum%9==0)
    {
        printf("\n%d is divisible by 9\n",n);
    }
    else
    {
        printf("\n%d is divisible NOT by 9\n",n);
    }
}