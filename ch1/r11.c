#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a1,a2,a3,e1,e2;
    printf("enter the marks of(ass1 ,ass2,ass3,ex1,ex2)\n");
    scanf("%f%f%f%f%f",&a1,&a2,&a3,&e1,&e2);
    printf("weighted score : %f\n",(a1/10)+(a2/10)+(a3/10)+(e1*0.35)+(e2*0.35));
    return 0;
}