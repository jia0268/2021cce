#include <stdio.h>
#define Max(X,Y) (X>Y?X:Y)
int main()
{
    int a=10;
    int b=20;
    int max=Max(a,b);
    printf("max=%d\n",max);
}
