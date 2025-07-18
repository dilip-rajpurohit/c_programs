// 
// ch3 r3 using array
// 

#include<stdio.h>
int read_fun();
int grade_fun();
int display();
int main()
{
    int students[10],n;
    char grades[10];
    printf("enter the number of students\n");
    scanf("%d",&n);
    read_fun(students,n);
    grade_fun(students,grades,n);
    return 0;
}
int read_fun(int students[],int n)
{
    for (int i = 0; i <n; i++)
    {
        printf("enter the marks of student Roll-No %d\n",i+1);
        scanf("%d",&students[i]);
    }
    return 0;
}
int grade_fun(int students[],char grades[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if(students[i]>=0&&students[i]<=31)
            grades[i]='F';
        else if(students[i]<=40)
            grades[i]='E';
        else if(students[i]<=48)
            grades[i]='D';
        else if(students[i]<=56)
            grades[i]='C';
        else if(students[i]<=64)
            grades[i]='B';
        else if(students[i]<=72)
            grades[i]='A';
        else if(students[i]<=80)
            grades[i]='S';
        else 
        printf("invalid marks of rollno : %d\n",i+1);
    }
    display(students,grades,n);
    return 0;
}
int display(int students[], char grades[],int n)
{
    printf("\n\nRoll-N0\t marks\tgrades\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%4d\t%4d\t%3c\n",i+1,students[i],grades[i]);
    }
    return 0;
}
