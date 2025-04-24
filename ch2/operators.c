#include<stdio.h>
int main()
{
    int a=-2,b=3;
    printf("%d\n",a&&b);
    printf("%d\n",a||b);
    printf("%d\n\n",!a);

    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d \n",a^b);
    printf("%u\n",~a);

    // ternery operator in c
    a<b?printf("a is less\n"):printf("b is less\n");
    // type converstion
    float c=2.5,d=3,e;
    a=c+d;
    e=c+d;
    printf("%f\n",a);
    printf("%f\n",e);

    return 0;
}