#include<stdio.h>

int read(float a[],int n)
{
    static int s=1;
    printf("enter the values of array %d\n",s);
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&a[i]);
    }
    s++;
    return 0;
}

int add(float a1[],float a2[],int n)
{
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        sum=a1[i]+a2[i];
        printf("sum %d = %f\n",i+1,sum);
    }
    return 0;
}

int main()
{
    float a1[10],a2[10];
    int n;
    printf("enter the size of arrays\n");
    scanf("%d",&n);
    read(a1,n);
    read(a2,n);
    add(a1,a2,n);
    return 0;
}