#include <stdio.h>
struct Book
{
    char name[20];
    short price;
};
/*int main()
{
    //. 結構體變量.成員
    struct Book b1 = {"C語言程式設計",55};
    printf("書名:%s\n",b1.name);
    printf("價格:%d元\n",b1.price);
    b1.price =15;
    printf("修改後的價格:%d元\n",b1.price);
}*/
int main()
{
    //-> 結構體指針->成員
    struct Book b1 = {"C語言程式設計",55};
    struct Book* pb =&b1;
    printf("%s\n",pb->name);
    printf("%d\n",pb->price);
}
