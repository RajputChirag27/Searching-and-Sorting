public class BubbleSort {

        public static void bubble_Sort(int arr[], int n){
            for(int i=0; i<n-1 ;i++){
                for(int j=0 ; j<n-i-1 ;j++){
                    if(arr[j+1]<arr[j]){
                        // swapping arr[j] and arr[j+1]
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }

// Printing the array
            for(int i = 0; i<n; i++){
                System.out.print(arr[i]+" ");
            }
        }
        public static void main(String[] args) {
            int arr[] = {20,10,40,30,60,50};
            bubble_Sort(arr,6);
        }
    }


