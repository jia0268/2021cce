#include <stdio.h>
int main()
{
    int day = 0;
    scanf("%d",&day);
    switch(day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("�u�@��\n");
        break;
    case 6:
    case 7:
        printf("�𮧤�\n");
        break;
    default:
        printf("��J���~\n");
        break;
    }
}
