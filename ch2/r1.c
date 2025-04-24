#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int tempfun(float);
int main(int argc,char **argv)
{

    if(argc!=2)
    {
        fprintf(stderr,"usage : %s [temprature in fahrenheit] \n",argv[0]);
        return 1;
    }
    float fah=atof(argv[1]);
    tempfun(fah);
    return 0;
}

int tempfun(float fah)
{
    float cel=(fah-32)*((float)5/9);
    if(cel<0)
    {
        printf("Frezzing\n");
    }
    else if(cel<10)
    {
        printf("very cold\n");
    }
    else if(cel<20)
    {
        printf("cold\n");
    }
    else if(cel<30)
    {
        printf("Normal\n");
    }
    else if(cel<40)
    {
        printf("Hot\n");
    }
    else
    {
        printf("very hot\n");
    }
    return 0;
}