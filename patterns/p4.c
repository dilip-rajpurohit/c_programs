
// utp[uppuer triangular pattern]
            // ---->t_1
            // ---->t_2
            // ---->t_3
            // ---->t_4
// ltp[lower triagluar pattern]
            // ---->t_3

#include<stdio.h>

int pattern(int n);
int utp(int n,int i);

int ltp(int n,int i);
int t_1(int n,int i);
int t_2(int n,int i);
int t_3(int n,int i);
int t_4(int n,int i);
int t_5(int n,int i);
int t_6(int n,int i);
int main()
{
    int n;
    printf("enter the no of rows\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
int pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        utp(n,i);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        ltp(n,i);
        printf("\n");

    }
    
}
int utp(int n,int i)
{
    t_1(n,i);
    t_2(n,i);
    t_3(n,i);
}
int ltp(int n,int i)
{
    t_4(n,i);
    t_5(n,i);
    t_6(n,i);
}

int t_1(int n,int i)
{
    for (int j = 0; j <n-i; j++)
        {
            printf(" *");
        }
        printf("  ");
}
int t_2(int n,int i)
{
    for (int j = 0; j <=i*2; j++)
    {
        printf(" *");
    }
        printf("  ");
}
int t_3(int n,int i)
{
    for (int j = 0; j <n-i; j++)
    {
        printf(" *");
    }
    
    for (int j = 0; j <i; j++)
    {
        printf("  ");
    }
}
int t_4(int n,int i)
{
    for (int j = 0; j <=i; j++)
    {
        printf(" *");
    }
    printf("  ");
}

int t_5(int n,int i)
{
    for (int j = 0; j <((n-i)*2)-1; j++)
    {
        printf(" *");
    }
        printf("  ");
}
int t_6(int n,int i)
{
    for (int j = 0; j <=i; j++)
    {
        printf(" *");
    }
        printf("  ");
}