#include<stdio.h>
#include<stdlib.h>
typedef struct emp
{
    int id,age,number;
    char name[10],email[100];
    float salary;
}emp;
int add_emp(emp [],int);
int del_emp(emp [],int);
int upd_emp(emp [],int);
int src_emp(emp [],int);
int main()
{
    int n=0;
    emp a[100];
    do
    {
        printf("chose the option\n1. add employee detials\n2. delete employee detials \n3. search employee detials\n4. update employee detials\n5. exit\n > ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: n++;
                    add_emp(a,n);
            break;
            case 2:
                    del_emp(a,n);
                    n--;
            break;
            case 3:src_emp(a,n);
            break;
            case 4:upd_emp(a,n);
            break;
            case 5: exit(1);
            break;
        }
    }while(n!=6);
    return 0;
}
int add_emp(emp a[100],int n)
{
        printf("enter the employee detials :\n");
        printf("ID > ");
        scanf("%d",&a->id);

}
int del_emp(emp a[100],int n)
{
        printf("enter the employee detials :\n");
        printf("ID > ");
        scanf("%d",&a->id);

}
int src_emp(emp a[100],int n)
{
        printf("enter the employee detials :\n");
        printf("ID > ");
        scanf("%d",&a->id);

}
int upd_emp(emp a[100],int n)
{
        printf("enter the employee detials :\n");
        printf("ID > ");
        scanf("%d",&a->id);

}

