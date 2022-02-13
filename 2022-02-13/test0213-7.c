#include <stdio.h>
int main()
{
    int i = 0;
    for(i=1;i<=9;i++)
    {
        int j=1;
        for(j=1;j<=9;j++)
        {
            printf("%-dx%-d=%-4d",i,j,i*j);//-4d - ¦V¥ª¹ï»ô
        }
        printf("\n");
    }
    return 0;
}
