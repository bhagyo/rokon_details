#include<stdio.h>
int rev_num(int num)
{
    int r_num=0;
    while(num!=0)
    {
        r_num=r_num*10+(num%10);
        num/=10;
    }
    return r_num;
}

int main()
{
    int num,i,j,k;
    scanf("%d",&num);
    printf("%d",rev_num(num));
    return 0;
}
