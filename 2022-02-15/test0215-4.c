#include <stdio.h>
void Swap(int* pa,int* pb)//����a,b���a�}
{
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
int main()
{
    int a=10;
    //int* pa=&a;//pa���w�ܶq
    //*pa=20//�Ѥޥξާ@
    int b=20;
    int temp=0;
    printf("a=%d b=%d\n",a,b);
    Swap(&a,&b);//��a,b���a�}�ǹL�h
    printf("a=%d b=%d\n",a,b);
    return 0;
}
