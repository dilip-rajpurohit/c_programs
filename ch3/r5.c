#include<stdio.h>
int salary(int n);
int main()
{
    int n;
    printf("enter the number of employees\n");
    scanf("%d",&n);
    salary(n);   
    return 0;
}
int salary(int n)
{
    float sal,maxsal=0,minsal=0,avgsal=0;

    for (int i = 0; i < n; i++)
    {
        printf("enter the salary of emp %d\n",i+1);
        scanf("%f",&sal);
        if(i==0)
        {
            minsal=maxsal=sal;
        }
        if(sal>maxsal)
        {
            maxsal=sal;
        }
        else if(sal<minsal)
        {
            minsal=sal;
        }
        avgsal=avgsal+sal;
    }
    printf("max salary : Rs %.2f\n",maxsal);
    printf("min salary : Rs %.2f\n",minsal);
    printf("avg salary : Rs %.2f\n",avgsal/n);
    
}