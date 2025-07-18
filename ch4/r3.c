#include<stdio.h>
#include<string.h>

int read(float h[],int n)
{
    printf("enter the heights of candidates\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&h[i]);
    }
    return 0;
}
int display(float h[],int n)
{
    printf("\nthe heights of candidates :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ",h[i]);
    }
    return 0;
}
int sort(float h[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(h[j]>h[j+1])
            {
                float temp=h[j];
                h[j]=h[j+1];
                h[j+1]=temp;
            }
        }
    }
    display(h,n);
    printf("\nhighest candidate = %.2f \n",h[n-1]);
    return 0;
    
}

// int search(float h[],int n)
// {
//     int l=0,h1=n-1,mid=0;
//     float k;
//     printf("enter the selection height\n");
//     scanf("%f",&k);

//     while(l<=h1)
//     {
//         mid=(h1+l)/2;
//         if(h[mid]==k)
//         {
//             printf("selected\n");
//             return 1;
//         }
//         else if(h[mid]<k)
//         {
//             l=mid+1;
//         }
//         else{
//             h1=mid-1;
//         }
//     }
//     printf("not selected\n");
//     return 0;
// }
int main()
{
    float h[10];
    int n;
    printf("enter the number of candidates\n");
    scanf("%d",&n);
    read(h,n);
    sort(h,n);
    // search(h,n);
    return 0;
}