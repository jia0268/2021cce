#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char password[20] = {0};
    for(i=0;i<3;i++)
    {
        printf("�п�J�K�X:>");
        scanf("%s",password);
        if(strcmp(password,"0268")==0)//����ΨӤ����Ӧr�Ŧ�O�_�۵�,���ӨϥΤ@�Ӯw���-strcmp
        {
            printf("�n�J���\\n");
            break;
        }
        else
        {
            printf("�K�X���~\n");
        }
    }
    if(i==3)
        printf("�T���K�X�����~,�h�X�{��\n");
    return 0;
}
