#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k=7;
    int sz = sizeof(arr)/sizeof(arr[0]);//�p�⤸���Ӽ�40/4=10
    int left = 0;//���U��
    int right = sz-1;//�k�U��
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>k)
        {
            right=mid-1;
        }
        else if(arr[mid]<k)
        {
            left=mid+1;
        }
        else
        {
            printf("���F,�U�ЬO: %d\n",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("�䤣��\n");
    }
    return 0;
}
