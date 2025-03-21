#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int windchill(float *,float *);
int main(int argc ,char **argv)
{

    if(argc!=3)
    {
        fprintf(stderr,"usage : %s [temp] [wind_speed]\n");
        return 1;
    }
    float t,v;
    t=atof(argv[1]);
    v=atof(argv[2]);
    windchill(&t,&v);
    return 0;
}
int windchill(float *t,float *v)
{
    float w;
    if(*t<=0 && *v>=5)
    {
        w=13.12+(0.6215*(*t))-(11.37*(pow((*v),0.16)))+(0.3965*(*t)*(pow((*v),0.16)));
    }
    else if( *t<=0 && ( 0<= *v && *v<5))
    {
        w=*t+(((-1.59+(0.1345*(*t)))/5)*(*v));
    }
    else
    {
        fprintf(stderr,"invalid input -----> wind chill cannot be determined\n");
        return 1;
    }
    printf("WindChill Fcator : %f \n",w);

    return 0;
}