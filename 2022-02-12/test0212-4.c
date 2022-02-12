#include <stdio.h>
int main()
{
    int sum=1;
    int ans=0;
    for(int i=1;i<=10;i++)
    {
        sum*=i;
        ans+=sum;
    }
    printf("sum = %d",ans);
    return 0;
}
