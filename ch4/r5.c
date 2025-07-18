#include<stdio.h>
int read(int *a,int n)
{
    printf("enter the values in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(a+i));
    }
    
    return 0;
}

int display(int *a ,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n\n");
    return 0;
}
int reverse(int *a ,int n)
{
    for (int i = 0; i <n/2; i++)
    {
        int temp=*(a+i);
        *(a+i)=*(a+(n-i-1));
        *(a+(n-i-1))=temp;
    }
    return 0;
}
int main()
{
    int arr[10];
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(arr,n);
    display(arr,n);
    reverse(arr,n);
    display(arr,n);
    return 0;
}