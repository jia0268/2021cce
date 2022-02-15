#include <stdio.h>
int main()
{
    printf("%d",printf("%d",printf("%d",43)));
    //第一次打印43,是2個字符,第二次打印43'2',2是1個字符,第三次打印432'1',結果為4321
    return 0;
}
