#include<stdio.h>
int qualify(float a,float b);
int main()
{
    float a,b;
    printf("enter the marks of student in A [/125] and B subjects [/80]\n");
    scanf("%f%f",&a,&b);
    qualify(a,b);
    return 0;
}
int qualify(float a,float b)
{
    a=a*(1/1.25);
    b=b*(1/.8);
    printf("%f \n %f\n",a,b);
    if(a>=55 && b>=45)
    {
        printf("you are qualified for degree\n");
    }
    else if(45<=a&&a<55&& b>=50)
    {
        printf("you are qualified for degree\n");
    }
    else if(a>=65&&b<45)
    {
        printf("allowed to reapper in subject B.\n");
    }
    else 
    {
    printf("Failed\n");
    }
    return 0;
}