#include<stdio.h>

int read(int *a,int n)
{
    printf("enter the value of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}
int display(int *a,int n)
{

    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int sort(int *a,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return 0;
}

int search(int *a, int n)
{
    int l=0,h=n-1,mid=0,k;
    printf("\nenter the value of find\n");
    scanf("%d",&k);
    while (l<=h)
    {
        mid=(h+l)/2;
        if(a[mid]==k)
        {
            printf("found\n");
            if(k%3==0)
            {
                printf("number is divisible by 3\n");
            }
            else{
                printf("number is not divisible by 3\n");
            }
            return 1;
        }
        else if(a[mid]<k)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return 0;
}
int main()
{
    int a[10],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    sort(a,n);
    display(a,n);
    search(a,n);
    return 0;
}