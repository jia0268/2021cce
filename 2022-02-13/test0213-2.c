#include <stdio.h>
#include <math.h>
int main()
{
    int i=0;
    int count=0;
    for(i=101;i<=200;i+=2)//100�֩w���O,�q101�}�l,i=i+2,�@��+2�]�����Ƥ��O
    {
        int j=0;
        for(j=2;j<=sqrt(i);j++)//sqrt�}����->16�}����=4,�]��:1,2,4;1*16,2*8,4*4
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
