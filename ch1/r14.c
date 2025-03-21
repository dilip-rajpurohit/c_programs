#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sales_person(int n,int csp);
int main()
{
    int csp,n;
    printf("welcome to the store\n");
    printf("enter the sales price of the computers\n");
    scanf("%d",&csp);
    printf("enter the number of sales person\n");
    scanf("%d",&n);
    sales_person(n,csp);
    return 0;
}
int sales_person(int n,int csp)
{
    int spc,sal,ms;
    printf("enter the slalary and sales count for : \n");
    for(int i=0;i<n;i++)
    {
        printf("sp[%d] : ",i+1);
        scanf("%d%d",&sal,&spc);
        ms=sal+(spc*1000);
        printf("\tgross salary: %f\n",ms+ms*0.02);
    }   
    return 0;
}