#include <stdio.h>
struct Book
{
    char name[20];
    short price;
};
/*int main()
{
    //. ���c���ܶq.����
    struct Book b1 = {"C�y���{���]�p",55};
    printf("�ѦW:%s\n",b1.name);
    printf("����:%d��\n",b1.price);
    b1.price =15;
    printf("�ק�᪺����:%d��\n",b1.price);
}*/
int main()
{
    //-> ���c����w->����
    struct Book b1 = {"C�y���{���]�p",55};
    struct Book* pb =&b1;
    printf("%s\n",pb->name);
    printf("%d\n",pb->price);
}
