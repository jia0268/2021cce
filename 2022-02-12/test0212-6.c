 #include <stdio.h>
 #include <string.h>
 #include <windows.h>//��0.5��
 #include <stdlib.h>//�M�ū̹�
 int main()
 {
     //"welcome to bit!!!!!!"
     //"____________________"
     //"w__________________!"
     //...
     //"welcome to bit!!!!!!"
     char arr1[] = "welcome to bit!!!!!!";
     char arr2[] = "____________________";
     int left = 0;
     int right = strlen(arr1)-1;
     while(left<=right)
     {
         arr2[left] = arr1[left];
         arr2[right] = arr1[right];
         printf("%s\n",arr2);
         Sleep(500);//��0.5��
         system("cls");//����t�ΩR�O���@�Ө��-cls-�M�ū̹�
         left++;
         right--;
     }
     printf("%s\n",arr2);
     return 0;
 }
