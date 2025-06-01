
// * * * * *
// * * * *
// * * *
// * *
// *

#include<stdio.h>
int pattern(int n);
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
        for (int j = 0; j <n-i; j++)
        {
            printf(" *");
        }
          printf("\n");

    }
    
}