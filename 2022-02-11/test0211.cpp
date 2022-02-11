#include <stdio.h>
/*int main()
{
    int a = 10;
    int* p = &a;
    *p = 20;
    printf("a=%d\n",a);
}*/
/*int main()
{
    char ch ='w';
    char* pc =&ch;
    *pc = 'a';
    printf("%c\n",ch);
}*/
int main()
{
    double d=3.14;
    double* pd=&d;
    *pd=5.5;
    printf("%lf\n",d);
    printf("%lf\n",*pd);
}
