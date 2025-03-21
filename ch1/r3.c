#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv)
{
    if(argc!=5)
    {
        fprintf(stderr,"usage : %s [x1] [x2] [y1] [y2]\n");
        return 1;
    }

    float x1,x2,y1,y2;
    x1=atof(argv[1]);
    x2=atof(argv[2]);
    y1=atof(argv[3]);
    y2=atof(argv[4]);
    printf("distance : %f \n",sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
    return 0;
}