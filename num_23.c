#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,j,k,isPrime;
    scanf("%d",&num);
    isPrime=1;
    for(i=2;i<=sqrt(num);i++)
        if(num%i==0) isPrime=0;
    if(isPrime) printf("%d is Prime\n",num);
    else        printf("%d is not Prime\n",num);
    return 0;
}
