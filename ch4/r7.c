#include<stdio.h>

int read(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}
int equ(int *a,int n)
{
    int sl,su;
    for (int i = 0; i < n; i++)
    {
        sl=0,su=0;
        for (int j = 0; j < i; j++)
        {
            sl+=a[j];
        }
        for (int j = i+1; j < n; j++)
        {
            su+=a[j];
        }
        if(sl==su)
        {
            printf("%d is the equilibrium index\n",i);
            return 1;
        }
    }

    // int st=0,sl=0;
    // for (int i = 0; i < n; i++)
    // {
    //     st+=a[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     int sr=st-sl-a[i];

    //     if(sl==sr)
    //     {
    //         printf("%d is the equilibrium index\n",i);
    //         return 1;
    //     }
    //     sl+=a[i];
    // }
    
    
    printf("there is no equilibrium index\n");
    return 0;
}
int main()
{
    int a[10],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    equ(a,n);
    return 0;
}