#include <stdio.h>
void Swap(int* pa,int* pb)//接收a,b的地址
{
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
int main()
{
    int a=10;
    //int* pa=&a;//pa指針變量
    //*pa=20//解引用操作
    int b=20;
    int temp=0;
    printf("a=%d b=%d\n",a,b);
    Swap(&a,&b);//把a,b的地址傳過去
    printf("a=%d b=%d\n",a,b);
    return 0;
}
