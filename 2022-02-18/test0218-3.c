#include <stdio.h>
#include <string.h>
//�j�ƤƤp
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0;
//3
int my_strlen(char* str)
{
  if(*str != '\0')
    return 1+my_strlen(str+1);
  else
    return 0;
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

