#include<stdio.h>
#include<stdlib.h>

int isleapyear(int);
int date(int *a,int *b);

int main(int argc,char **argv)
{
    if(argc!=3)
    {
        fprintf(stdout,"usage : %s  year range [start] [end]\n",argv[0]);
        return 1;
    }

    int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    if(a>b)
    {
        fprintf(stderr,"invalid input\n");
        return 1;
    }
    
    date(&a,&b);
    
    return 0;
}
int date(int *a,int *b)
{
    int dayinmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int day,m=1;
    
    printf("enter the number n for finding nth date\n");
    scanf("%d",&day);
    
    if(day<1&&day>366)
    {
        printf("invalid no of days\n");
        return 1;
    }

    while(day>0)
    {
        if(day<=dayinmonth[m])
        {
            day;
            break;
        }
        else
        {
            day-=dayinmonth[m];
            m++;
        }
    }
    while(*a<=*b)
    {
        if(isleapyear(*a))
        {
            printf("%d-%d-%d [leap-year]\n",day+1,m,*a);
            if(m==13)
            {
                printf("31-12-%d [leap-year]\n",*a);
            }

        }
        else
        {
            printf("%d-%d-%d\n",day,m,*a);
        }
        (*a)++;
    }

}
int isleapyear(int y)
{
    if((y%4==0 && y%100!=0)||y%400==0)
    {
        return 1;
    }
    return 0;
}