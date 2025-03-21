#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc ,char **argv)
{
    if(argc!=2)
    {
        fprintf(stderr," usage : %s [Amount_to_withdraw] \n",argv[0]);
        return 1;
    }
    int amt,c=0;
    amt=atoi(argv[1]);

    int array[]={2000,500,200,100,50,20,10,1};
    for(int i=0;i<8;i++)
    {
        if(amt>=array[i])
        {
            c=amt/array[i];
            printf("%d\tx\t%d\n",array[i],c);
            amt=amt%(array[i]);
        }
    }

    // if(temp>=2000)
    // {
    //     c=temp/2000;
    //     printf("2000 x %d\n",c);
    //     temp=temp-(2000*c);
    // }
    // if(temp>=500)
    // {
    //     c=temp/500;
    //     printf("500  x %d\n",c);
    //     temp=temp-(500*c);
    // }
    // if(temp>=200)
    // {
    //     c=temp/200;
    //     printf("200  x %d\n",c);
    //     temp=temp-(200*c);
    // }
    // if(temp>=100)
    // {
    //     c=temp/100;
    //     printf("100  x %d\n",c);
    //     temp=temp-(100*c);
    // }
    // if(temp>=50)
    // {
    //     c=temp/50;
    //     printf("50   x %d\n",c);
    //     temp=temp-(50*c);
    // }
    // if(temp>=20)
    // {
    //     c=temp/20;
    //     printf("20   x %d\n",c);
    //     temp=temp-(20*c);
    // }
    // if(temp>=10)
    // {
    //     c=temp/10;
    //     printf("10   x %d\n",c);
    //     temp=temp-(10*c);
    // }
    // printf("1    x %d\n",temp);

    return 0;
}