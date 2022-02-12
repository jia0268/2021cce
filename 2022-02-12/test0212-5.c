#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k=7;
    int sz = sizeof(arr)/sizeof(arr[0]);//計算元素個數40/4=10
    int left = 0;//左下標
    int right = sz-1;//右下標
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
            printf("找到了,下標是: %d\n",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("找不到\n");
    }
    return 0;
}
