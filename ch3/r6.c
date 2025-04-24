#include<stdio.h>
int salary(int n);
int main()
{
    int n;
    printf("enter the no of employees\n");
    scanf("%d",&n);
    salary(n);
    return 0;
}
int salary(int n)
{
    int data[100][3];
    char name[100][8];
    float pay=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter the [ID] [NAME] [hourly wage rate] [no of hr work] for employee %d\n",i+1);
        scanf("%d%s%d%d",&data[i][0],name[i],&data[i][1],&data[i][2]);
    }
    
   

    printf("\nID\tNAME\t\tWAGE(hr)\tWORK-HR\t\tSALARY\n--------------------------------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        if(data[i][2]<=40)
        {
            pay=data[i][1]*data[i][2];
        }
        else
        {
            pay=(data[i][1]*40)+ ((data[i][1]/2)*(data[i][2]-40));
        }
        pay=pay-(pay*0.03625);

        printf("%d\t%s\t\t%d\t\t%d\t\t%.2f\n",data[i][0],name[i],data[i][1],data[i][2],pay);
    }
}

// 12      dilip           500             20
// 13      akshay          500             40
// 13      bharat          500             400
// 14      prshant         155             45
// 15      john            500             60