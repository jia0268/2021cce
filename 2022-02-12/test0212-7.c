#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char password[20] = {0};
    for(i=0;i<3;i++)
    {
        printf("請輸入密碼:>");
        scanf("%s",password);
        if(strcmp(password,"0268")==0)//不能用來比較兩個字符串是否相等,應該使用一個庫函數-strcmp
        {
            printf("登入成功\n");
            break;
        }
        else
        {
            printf("密碼錯誤\n");
        }
    }
    if(i==3)
        printf("三次密碼均錯誤,退出程序\n");
    return 0;
}
