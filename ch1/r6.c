#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float cal_len(float *,float *);
int main(int argc,char **argv)
{
    if(argc!=3)
    {
        fprintf(stderr,"usage : %s [Thickness] [number of folds] \n",argv[0]);
        return 1;
    }
    float t,f;
    t=atof(argv[1]);
    f=atof(argv[2]);
    printf("Min_len_of_paper : %f mm\n",cal_len(&t,&f));
    return 0;
}
float cal_len(float *t,float *f)
{
    float len;
    len= ((3.14159**t)/6)*(pow(2,*f)+4)*(pow(2,*f)-1);
    return len;
}