#include <stdio.h>
#include <string.h>
//大事化小
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
    // int len = strlen(arr);//求字串長度
    //printf("%d\n",len);
    int len = my_strlen(arr);
    //arr是數組,數組傳參,傳過去的不是整個數組,而是第一個元素的地址
    printf("len = %d\n",len);
    return 0;
}

