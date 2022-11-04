package Java.Algorithms;

public class InsertionSort {

    public static void sort(int[] myarr){       // Worst Case Time Complexity = O(n^2) , S.C = O(1)
        for(int i = 1;i<myarr.length; i++){     
            for(int j = i-1;j>=0 ;j--){
                if (myarr[j]<=myarr[j+1]) break;

                int temp = myarr[j];
                myarr[j] = myarr[j+1];
                myarr[j+1] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {9,2,7,4,6,5};
        sort(arr);
        for(int val : arr){
            System.out.print(val+ " ");
        }
    }
}
