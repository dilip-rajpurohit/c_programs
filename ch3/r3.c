#include<stdio.h>
int grade_count(int);
int main()
{
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    grade_count(n);
    return 0;
}
int grade_count(int n)
{
    int marks=0;
    int g[100]={0};
    
    for (int i = 0; i < n; i++)
    {
        printf("MARKS OF ROLL NO %d\n",i+1);
        scanf("%d",&marks);
        switch(marks)
        {
            case 0 ...31: g[0]++;
            break;
            case 32 ...40: g[1]++;
            break;
            case 41 ...48: g[2]++;
            break;
            case 49 ...56: g[3]++;
            break;
            case 57 ...64: g[4]++;
            break;
            case 65 ...72: g[5]++;
            break;
            case 73 ...80: g[6]++;
            break;
            
        }
    }
    for (int i = 6; i >=0; i--)
    {
        int j=i;
        if(i==0)
        j=19;
        printf("no of students in %c %d\n",j+96,g[6-i]);

    }
}