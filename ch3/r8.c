#include<stdio.h>
int count(int,int,int,int);
int main()
{
    int at,s,t,ot;
    printf("enter the locations of [apple tree] ,[start] and [end] of home  and [orange tree] \n");
    scanf("%d%d%d%d",&at,&s,&t,&ot);
    count(at,s,t,ot);
    return 0;
}
int count(int at,int s,int t,int ot)
{
    int n,m,d=0,a=0,o=0;
    printf("enter the number of apple and oranges fall\n");
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        printf("enter the distance of apple %d fall\n",i+1);
        scanf("%d",&d);
        d=at+d;
        if(d>=s && d<=t)
        {
            a++;
        }
    }
    for(int i=0;i<m;i++)
    {
        printf("enter the distance of orange %d fall\n",i+1);
        scanf("%d",&d);
        d=ot+d;
        if(d>=s && d<=t)
        {
            o++;
        }
    }
    printf("%d apples and %d oranges fall on house\n",a,o);
}