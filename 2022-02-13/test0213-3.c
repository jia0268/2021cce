#include <stdio.h>
int main()
{
    int a=0,b=0;
    for(a=1,b=1;a<=100;a++)
    {
        if(b>=20)break;//a=9,b=22->break;
        if(b%3==1)
        {
            b=b+3;
            continue;
            //a=1,b=1,b=b+3=4;
            //a=2,b=4,b=b+3=7;
            //a=3,b=7,b=b+3=10;
            //a=4,b=10,b=b+3=13;
            //a=5,b=13,b=b+3=16;
            //a=6,b=16,b=b+3=19;
            //a=7,b=19,b=b+3=22;
        }
        b=b-5;//沒有機會執行
    }
    printf("%d\n",a);
    return 0;
}
