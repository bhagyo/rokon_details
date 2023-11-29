#include<stdio.h>
#include<math.h>
int gcd(int n_1,int n_2)
{
    while(n_1!=0 && n_2!=0)
    {
        if(n_1>n_2) n_1=n_1%n_2;
        else        n_2=n_2%n_1;
    }
    if(n_1>n_2) return n_1;
    else        return n_2;
}
int main()
{
    int loop,num1,num2,res_lcm,i;
    scanf("%d %d %d",&loop,&num1,&num2);
    res_lcm=(num1*num2)/(gcd(num1,num2));
    for(i=2;i<loop;i++)
    {
        scanf("%d",&num1);
        res_lcm=(num1*res_lcm)/(gcd(res_lcm,num1));
    }
    printf("GCD is = %d\n",res_lcm);
    return 0;
}
