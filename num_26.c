#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,k;
    scanf("%d",&num);
    k=1;
    for(i=2;i<=sqrt(num);i++)
        if(num%i==0) k=0;
    if(k==1) printf("%d is prime\n",num);
    else     printf("%d is not prime\n",num);
    return 0;
}
