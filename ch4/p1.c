//
//  sum and average of elements of array 
// 

#include <stdio.h>
int array_values();
int s_av();
int main()
{
    int arr[5], n;
    printf("enter the size  of array\n");
    scanf("%d", &n);
    array_values(arr, n);
    s_av(arr, n);
    return 0;
}
int array_values(int ar[], int n)
{
    printf("enter the values of array\n");
    for (int i=0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    return 0;
}
int s_av(int arr[], int n)
{
    int sum = 0, avg = 0;
    for (int i=0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("sum = %d\navg = %d\n", sum, sum / n);
    return 0;
}