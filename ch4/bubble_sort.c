#include <stdio.h>

int read();
int display();
int bubble_sort();

int main()
{
    int arr[10], n;

    printf("enter the size of array\n");
    scanf("%d", &n);

    read(arr, n);

    printf("Before sorting :\n");
    display(arr, n);

    bubble_sort(arr, n);

    printf("After sorting :\n");
    display(arr, n);

    return 0;
}

int read(int arr[], int n)
{
    printf("enter the values of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    return 0;
}
int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
int bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n -i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");
    return 0;
}