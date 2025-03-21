#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int reverse(int num);
int num_trick(int num);
int main(int argc,char **argv)
{
    // error handling
    if(argc!=2)
    {
        fprintf(stderr,"usage : %s [three_digit_number]\n",argv[0]);
        return 1;
    }
    int l,f,num=atoi(argv[1]);
    l=num%10;
    f=num/100;
    if((l-f)<2 && (f-l)<2)
    {
        fprintf(stdout,"invalid input\n");
        return 1;
    }

    // code logic
    printf(" result : %d\n",num_trick(num));

    return 0;
}

int reverse(int num)
{
    int rem,rev=0;
    for(int i=0;i<3;i++)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    return rev;
}

int num_trick(int num)
{
    int rev,res;
    rev=reverse(num);
    if(rev>num)
    {
        res=rev-num;
    }
    else
    {
        res=num-rev;
    }
    rev=reverse(res);
    res=res+rev;

    return res;
}