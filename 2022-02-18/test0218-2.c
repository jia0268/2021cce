#include <stdio.h>
#include <string.h>
int my_strlen(char* str)
{
    int count = 0;//count �p�ƾ�
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arr[] = "bit";
    // int len = strlen(arr);//�D�r�����
    //printf("%d\n",len);
    int len = my_strlen(arr);
    //arr�O�Ʋ�,�Ʋնǰ�,�ǹL�h�����O��ӼƲ�,�ӬO�Ĥ@�Ӥ������a�}
    printf("len = %d\n",len);
    return 0;
}
