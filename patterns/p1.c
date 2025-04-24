// 
// *
// * *
// * * *
// * * * *
// * * * * *
// 
#include<stdio.h>
int pattern(int);
int main()
{
    int n;
    printf("enter the no of row\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}

int pattern(int n)
{

    printf("\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}