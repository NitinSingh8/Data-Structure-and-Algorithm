package Java.Algorithms;

public class SelectionSort {

    public static void sort(int[] myarr){  // Worst Case Time Complexity = O(n^2) , S.C = O(1)
        for(int i = 0; i<myarr.length; i++){
            int cursmalleridx = i;                     // initially current smaller idx = i
            int cursmallerval = myarr[i];              // initially current samller value = myarr[i]
            for(int j=i+1; j<myarr.length; j++){
                if (myarr[j]<cursmallerval){
                    cursmallerval = myarr[j];
                    cursmalleridx = j;
                }
            }

            // Lets swap i and cursmalleridx
            int temp = myarr[i];
            myarr[i] = myarr[cursmalleridx];
            myarr[cursmalleridx] = temp;
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
