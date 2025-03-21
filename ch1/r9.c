#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char **argv)
{
    if(argc!=4)
    {
        fprintf(stderr,"usage : %s [mens_iteams] [womens_iteam] [kid_iteam]\n",argv[0]);
        return 1;
    }
    int m,w,k;
    float ma,wa,ka,total_amt;
    m=atoi(argv[1]);
    w=atoi(argv[2]);
    k=atoi(argv[3]);
    printf("enter the price for(men,women,kids) iteams let's assume that te price of the iteams is same eg:- for mens - Rs 100\n");
    scanf("%f%f%f",&ma,&wa,&ka);
    total_amt=((ma*m)-(m*(ma*0.1)))+((w*wa)-(w*(wa*0.2)))+((k*ka)-(k*(ka*0.15)));
    printf("Total amount : %f\n",total_amt);
    return 0;
}