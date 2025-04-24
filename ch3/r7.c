#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("enter the valu of a and b\n");
    scanf("%d%d",&a,&b);
    gcd(a,b);
    return 0;
}
int gcd (int a,int b)
{
    if(a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    while(b!=0)
    {
        int rem;
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("maxmium no of student %d\n",a);
}