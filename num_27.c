#include<stdio.h>
#include<math.h>

int main()
{
    int num,low,high,i,j,k;
    scanf("%d %d",&low,&high);
    for(j=low;j<=high; j++)
    {
        num=j;
        k=1;
        for(i=2; i<=sqrt(num); i++)
            if(num%i==0) k=0;
        if(num==2) printf("2 ");
        else if(num==1||num==0) printf("");
        else if(k==1) printf("%d ",num);
    }
    return 0;
}
