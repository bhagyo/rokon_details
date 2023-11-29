#include<stdio.h>
#include<math.h>

int sum(int lo,int hi)
{
    int i,total;
    total=0;
    for(i=lo;i<=hi;i++)
        if(i%2==1) total=total+i;
    return total;
}

int main()
{
    int low,high;
    scanf("%d %d",&low,&high);
    printf("Sum of all odd = %d",sum(low,high));
    return 0;
}
