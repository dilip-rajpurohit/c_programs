#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void ch_length(float *,float *);
int main(int argc,char **argv)
{
    if(argc!=3)
    {
        fprintf(stderr,"usage : %s [inital_temp] [new_temp]\n");
        return 1;
    }
    float t1,t2;
    t1=atof(argv[1]);
    t2=atof(argv[2]);
    ch_length(&t1,&t2);
    return 0;
}
void ch_length(float *t1,float *t2)
{
    printf("Change in height : %f m\n",11.1*(pow(10,-6))*(*t2- *t1)*324);
}