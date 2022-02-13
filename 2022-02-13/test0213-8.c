#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>//休息
void menu()
{
    printf("****************************************\n");
    printf("****       1.play     0.exit        ****\n");
    printf("****************************************\n");
}
void game()
{
    //生成一個隨機數
    int ret = 0;
    int guess = 0;
    //時間戳 當前計算機的時間-計算機的起始時間(1970.1.1.0:0:0)=(XXXX)秒
    ret=rand()%100+1;//生成隨機數 生成1-100之間的隨機數
    //printf("%d\n",ret);
    //猜數字
    while(1)
    {
        printf("請猜數字:>");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("猜大了\n");
        }
        else if(guess<ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("猜對了\n");
            break;
        }
    }
    Sleep(1500);//休息1秒
    system("cls");//清空
}
int main()
{
    int input=0;
    srand((unsigned int)time(NULL));//拿時間戳來設置隨機數的生成起點
    do
    {
        menu();
        printf("請選擇>:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出遊戲\n");
            break;
        default:
            printf("選擇錯誤\n");
            break;
        }
    }while(input);//讓遊戲繼續,看輸入的是1還是0
    return 0;
}
