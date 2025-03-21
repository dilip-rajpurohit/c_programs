#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc ,char **argv)
{
    if(argc!=2)
    {
        fprintf(stderr,"usage :%s [number_of_soups]\n",argv[0]);
        return 1;
    }
    float area,ns;
    ns=atof(argv[1]);
    area=2*3.14159*(3.5/2)*5*ns;
    printf(" Cost : %f \n",area*10);
    return 0;
}