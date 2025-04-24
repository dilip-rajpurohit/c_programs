#include<stdio.h>
int avg(int n);
int main()
{
    int n;
    printf("enter the number of postpaid customers\n");
    scanf("%d",&n);
    avg(n);
    return 0;
}
int avg(int n)
{
    float avg_sum=0,data_usage;
    for (int i=0;i<n;i++)
    {
        printf("enter the data usage of customer %d\n>",i+1);
        scanf("%f",&data_usage);
        avg_sum+=data_usage;
    }
    avg_sum/=n;
    printf("average data usage = %f\n",avg_sum);
}