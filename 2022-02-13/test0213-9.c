#include <stdio.h>
#include <stdlib.h>//system
#include <string.h>
int main()
{
    char input[20]={0};
    //shutdown -s -t 60
    //system()- ����t�ΩR�O��
    system("shutdown -s -t 60");
again:
    printf("�Ъ`�N,�A���q���b1����������,�p�G��J:�ڬO��,�N��������\n�п�J>:");
    scanf("%s",input);
    if(strcmp(input,"�ڬO��")==0)//�����Ӧr�Ŧ�-strcmp()
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
