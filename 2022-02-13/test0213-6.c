#include <stdio.h>
int main()
{
    int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    int max = arr[0];
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);//40/4=10 �Ӽ�
    for(i=1;i<sz;i++)//���ΩM�ۤv���,�qarr[1]�}�l��
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max = %d\n",max);
    return 0;
}
