 #include <stdio.h>
 #include <string.h>
 #include <windows.h>//休息0.5秒
 #include <stdlib.h>//清空屏幕
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
         Sleep(500);//休息0.5秒
         system("cls");//執行系統命令的一個函數-cls-清空屏幕
         left++;
         right--;
     }
     printf("%s\n",arr2);
     return 0;
 }
