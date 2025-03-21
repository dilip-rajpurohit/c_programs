#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char **argv)
{
    if(argc!=4)
    {
        fprintf(stderr,"usegae : %s [car_speed] [D] [time]\n",argv[0]);
        return 1;
    }
    float s,d,t,speed;
    s=atof(argv[1]);
    d=atof(argv[2]);
    t=atof(argv[3]);
    speed=s+((0.05*(d-1)*3600)/t);
    printf("car speed : %.2f kph\n",speed);
    return 0;
}