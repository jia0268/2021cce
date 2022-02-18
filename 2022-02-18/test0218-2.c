#include <stdio.h>
#include <string.h>
int my_strlen(char* str)
{
    int count = 0;//count 計數器
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
    // int len = strlen(arr);//求字串長度
    //printf("%d\n",len);
    int len = my_strlen(arr);
    //arr是數組,數組傳參,傳過去的不是整個數組,而是第一個元素的地址
    printf("len = %d\n",len);
    return 0;
}
