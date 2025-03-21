#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float num_eggs(float *,float *);
int main(int argc ,char **argv)
{
    if(argc!=3)
    {
        fprintf(stderr,"usage : %s [a] [b]\n",argv[0]);
        return 1;
    }

    float a, b;
    a=atof(argv[1]);
    b=atof(argv[2]);
    
    if(a<b)
    {
        fprintf(stdout,"invalid values\n");
        return 1;
    }
    else
    {
        printf(" num_eggs : %f \n",num_eggs(&a,&b));
    }

    return 0;
}
float num_eggs(float *a,float *b)
{
    float area ,e;
    e= sqrt(1-(pow(*b,2)/pow(*a,2)));
    area=(2*(3.14159)*pow(*b,2))+((2*3.14159*(*a)*(*b)*asin(e))/e);
    return (380.66/area);
}