#include<stdio.h>
int pi(int n);
int main()
{
    int n;
    printf("enter the number of iterations\n");
    scanf("%d",&n);
    pi(n);
    return 0;
}
int pi(int n)
{
    double p=1;

    for (int i = 1; i <=n; i=i+4)
    {
        p=p-(1.0/(i+2))+(1.0/(i+4));
        // printf("%d %d\n",i+2,i+4);
    }
    
    p*=4.0;
    printf("PI : %lf\n",p);
    
}