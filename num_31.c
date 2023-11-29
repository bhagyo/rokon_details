#include<stdio.h>
#include<math.h>

int sum(int lo,int hi)
{
    int i,total;
    total=0;
    for(i=lo;i<=hi;i++)
        if(i%2==0) total=total+i;
    return total;
}

int main()
{
    int low,high;
    scanf("%d %d",&low,&high);
    printf("Sum of all even = %d",sum(low,high));
    return 0;
}
