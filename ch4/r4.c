#include <stdio.h>
#include<stdlib.h>
int read(int a[], int n)
{
    printf("enter the marks of the students\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    return 0;
}

int sum(int a[], int n)
{
    int sum = 0;
    char gen;
    printf("enter the gender\n");
    scanf(" %c",&gen);

    switch (gen)
    {
    case 'b':
        for (int i = 1; i < n; i +=2)
        {
            sum += a[i];
        }
        break;
    case 'g':
        for (int i = 0; i < n; i +=2)
        {
            sum += a[i];
        }
    break;
    default:
        printf("invalid input gender\n");
    }

    printf("%d\n",sum);
    
    return 0;
}

int main()
{
    int a[100], n;
    printf("enter the number of students\n");
    scanf("%d", &n);
    if (n > 1000 || n < 1)
    {
        exit(0);
    }
    read(a, n);
    sum(a, n);
    return 0;
}