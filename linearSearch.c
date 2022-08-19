#include<stdio.h>
     int main()
{
          int arr[] = {1,2,3,4,5,6,7,8,9,10};
          int n = 100;
          int flag = 0;
          for(int i=1;i<sizeof(arr);i++){
               if(i==n){
    flag =1;
    break;
               }
               else{
                   flag = 0;
               }

          }
          if(flag==1){
              printf("Element found");
          }
          else{
              printf("Element not found");
          }    
return 0;
}
