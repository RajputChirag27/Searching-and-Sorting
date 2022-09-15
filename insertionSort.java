public class insertionSort {

        public static void insertion_Sort(int A[], int n){
            for(int i=1; i<n ;i++){
                int key = A[i];
                int j = i -1;
                while(j>=0 && A[j]>key){
                    A[j+1] = A[j];
                    j = j-1;
                    A[j+1]=key;
                }
            }
            for(int i = 0; i<n; i++){
                System.out.print(A[i]+" ");
            }
        }
        public static void main(String[] args) {
            int arr[] = {20,10,40,30,60,50};
            insertion_Sort(arr,6);
        }
    }


