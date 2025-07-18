
#include<stdio.h>

int read();
int display();
int sort();
int search();

int main()
{
    int price[10],n,a;
    printf("enter the number of cars\n");
    scanf("%d",&n);
    read(price,n);
    sort(price,n);
    search(price,n);
    return 0;
}

int read(int price[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter the price of car %d\n",i+1);
        scanf("%d",&price[i]);
    }
    return 0;
}

int display(int price[],int n)
{
    printf("prices of cars\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",price[i]);
    }
    return 0;
}

int sort(int price[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(price[j]>price[j+1])
            {
                int temp=price[j];
                price[j]=price[j+1];
                price[j+1]=temp;
            }
        }

    }
    display(price,n);
    return 0;
}

int search(int price[],int n)
{
    int key=0,l,h,mid;

    printf("\nenter the number to search\n");
    scanf("%d",&key);

    l=0;
    h=n-1;

  while (l<=h)
  {
    mid=(l+h)/2;
    if(price[mid]==key)
    {
        printf("price = %d found at %d position\n",price[mid],mid+1);
        return 1;
    }
    else if(price[mid]<key)
    {
        l=mid+1;
    }
    else
    {
        h=mid-1;
    }
  }

  printf("price not found\n");

    return 0;
}
