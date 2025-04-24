#include<stdio.h>
#include<stdlib.h>
int discount(int coupon);
int main()
{
    // input for the coupon code and calling the discount function
    int coupon_code;
    printf("Enter the coupon code here\n>");
    scanf("%d",&coupon_code);
    discount(coupon_code);
    return 0;
}
int discount(int coupon_code)
{
    
    int sum,digit_1,digit_2;
    if(coupon_code>999){

        digit_1=coupon_code%10;
        coupon_code /=10;
        while(coupon_code!=0)
        {
            sum=0;
            digit_2=coupon_code%10;
            coupon_code /=10;
            printf("d1 = %d\td2 = %d\n",digit_1,digit_2);
            sum=digit_1+digit_2;
            digit_1=digit_2;
            if(sum%2==0)
            {
                printf("Congratulation you got extra discount \n");
                return 1;
            }
        }
        printf("oops! better luck next time\n");
    }
    else
    {
        printf("invalid coupon code\n");
    }
    return 0;
}