#include <stdio.h>
#include <stdlib.h>//system
#include <string.h>
int main()
{
    char input[20]={0};
    //shutdown -s -t 60
    //system()- 執行系統命令的
    system("shutdown -s -t 60");
again:
    printf("請注意,你的電腦在1分鐘內關機,如果輸入:我是豬,就取消關機\n請輸入>:");
    scanf("%s",input);
    if(strcmp(input,"我是豬")==0)//比較兩個字符串-strcmp()
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
