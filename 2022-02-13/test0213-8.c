#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>//��
void menu()
{
    printf("****************************************\n");
    printf("****       1.play     0.exit        ****\n");
    printf("****************************************\n");
}
void game()
{
    //�ͦ��@���H����
    int ret = 0;
    int guess = 0;
    //�ɶ��W ��e�p������ɶ�-�p������_�l�ɶ�(1970.1.1.0:0:0)=(XXXX)��
    ret=rand()%100+1;//�ͦ��H���� �ͦ�1-100�������H����
    //printf("%d\n",ret);
    //�q�Ʀr
    while(1)
    {
        printf("�вq�Ʀr:>");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("�q�j�F\n");
        }
        else if(guess<ret)
        {
            printf("�q�p�F\n");
        }
        else
        {
            printf("�q��F\n");
            break;
        }
    }
    Sleep(1500);//��1��
    system("cls");//�M��
}
int main()
{
    int input=0;
    srand((unsigned int)time(NULL));//���ɶ��W�ӳ]�m�H���ƪ��ͦ��_�I
    do
    {
        menu();
        printf("�п��>:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�h�X�C��\n");
            break;
        default:
            printf("��ܿ��~\n");
            break;
        }
    }while(input);//���C���~��,�ݿ�J���O1�٬O0
    return 0;
}
