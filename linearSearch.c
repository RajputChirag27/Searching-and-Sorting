#include<stdio.h>
     int main()
{
     int n,num;
     printf("Enter the size of array\n");
     scanf("%d",&n);
     int arr[n];
          for(int i=0;i<n;i++){
     arr[i]=(rand()%100);
     }
     printf("The array is\n");
     for(int i=0;i<n;i++){
          printf("%d\n",arr[i]);
     }
          
          printf("Enter the number you want to search\n");
          scanf("%d",&num);
          
          int flag = 0;
         
          for(int i=1;i<n;i++){
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
