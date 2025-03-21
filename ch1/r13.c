#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc ,char **argv)
{
    if(argc!=1)
    {
        fprintf(stderr,"usage : %s",argv[0]);
        return 1;
    }    
    float a,b,c;
    printf("enter the prices of the iteams\n");
    scanf("%f%f%f",&a,&b,&c);
    a+=(a*0.02);
    b+=(b*0.02);
    c+=(c*0.02);
    printf("Net amount : %0.2f Rs/-\n",a+b+c);
    return 0;
}