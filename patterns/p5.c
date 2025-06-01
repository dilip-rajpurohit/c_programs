#include<stdio.h>
#include<stdlib.h>

int main()
{
     int n;
     printf("enter the number\n");
     scanf("%d",&n);
     for (int i = 1; i <2*n; i++)
     {
        int d=abs(i-n);
        for (int j = 0; j<n-d; j++)
        {
            printf("%d ",n-j);
        }
        for (int j= 0; j<(2*d); j++)
        {
            printf("%d ",d+1);
        }
        for (int j = n-d-1; j >0 ; j--)
        {
            printf("%d ",n-j+1);
        }
        
        printf("\n");
     }
     
    return 0;
}

