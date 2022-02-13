#include <stdio.h>
#include <math.h>
int main()
{
    int i=0;
    int count=0;
    for(i=101;i<=200;i+=2)//100肯定不是,從101開始,i=i+2,一次+2因為偶數不是
    {
        int j=0;
        for(j=2;j<=sqrt(i);j++)//sqrt開平方->16開平方=4,因數:1,2,4;1*16,2*8,4*4
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            count++;
            printf("%d ",i);
        }
    }
    printf("\ncount = %d\n",count);
}
