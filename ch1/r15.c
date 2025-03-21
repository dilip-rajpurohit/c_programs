#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc ,char **argv)
{
    if(argc!=3)
    {
        fprintf(stderr,"usage: %s [No_of_TV_sets] []\n",argv[0]);
    }

    return 0;
}