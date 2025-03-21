#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int isleapyear(int y);
int datecal(int d,int m,int y,int dtoa);
int main(int argc,char **argv)
{
    if(argc!=2)
    {
        fprintf(stderr,"usage :%s [day-month-year]\n",argv[0]);
        return 1;
    }
    char *day,*month,*year;
    day=strtok(argv[1],"-");
    if(day==NULL||strcmp(day,"0")==0)
    {
        fprintf(stderr," invalid date format\n");
        return 1;
    }
    month=strtok(NULL,"-");
    if(month==NULL||strcmp(month,"0")==0)
    {
        fprintf(stderr," invalid date format\n");
        return 1;
    }
    year=strtok(NULL,"-");
    if(year==NULL||strcmp(year,"0")==0)
    {
        fprintf(stderr," invalid date format\n");
        return 1;
    }

    int d,m,y,dtoa;
    d=atoi(day);
    m=atoi(month);
    y=atoi(year);

    printf("enter the num of days\n");
    scanf("%d",&dtoa);
    datecal(d,m,y,dtoa);
    return 0;
}
int isleapyear(int y)
{
    if((y%4==0 && y%100!=0)||y%400==0)
        return 1;
    return  0;
}
int datecal(int d,int m,int y,int dtoa)
{
    int daysinmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(isleapyear(y))
    {
        daysinmonth[2]=29;
    }

    while(dtoa>0)
    {
        if(d+dtoa<=daysinmonth[m])
        {
            d+=dtoa;
            break;
        }
        else
        {
            dtoa-=daysinmonth[m]-d;
            d=0;
            m++;
            if(m>12)
            {
                m=1;
                y++;
                if(isleapyear(y))
                    daysinmonth[2]=29;
                else
                    daysinmonth[2]=28;
            }
        }
    }
    printf("New date : %02d-%02d-%02d\n",d,m,y);    
}

