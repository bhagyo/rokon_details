#include<stdio.h>

int main()
{
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=i;j<num;j++) printf(" ");

        for(j=1;j<=i;j++) printf("%d",j*2-1);

        for(j=i-1;j>=1;j--) printf("%d",j*2-1);

        printf("\n");
    }
    return 0;
}
