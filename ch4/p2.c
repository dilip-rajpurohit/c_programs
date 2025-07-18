// 
// merging of two array
// 
#include<stdio.h>

int read();
int display();
int merge();
int main()
{
    int a[10],b[10],c[10],n,m;
    printf("enter the size of arrays (a,b)\n");
    scanf("%d%d",&n,&m);
    read(a,n);
    read(b,m);
    merge(a,b,c,n,m);
    display(c,n+m);
    return 0;
}
int read(int arr[],int s)
{
    printf("enter the values of array\n");
    for (int i=0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    return 0;
}
int merge(int a[],int b[],int c[],int n,int m)
{
    for (int i=0; i < n+m; i++)
    {
        if(i<n)
        c[i]=a[i];
        else
        c[i]=b[i-n];
    }
    return 0;
}

int display(int c[],int n)
{
    printf("the values of merged array\n");
    for (int i=0; i < n; i++)
    {
        printf("%d ",c[i]);
    }
}