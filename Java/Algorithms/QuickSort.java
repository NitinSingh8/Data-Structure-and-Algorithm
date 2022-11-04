package Java.Algorithms;

// Worst Case Time Complexity = O(n^2) , S.C = O(1)

class QuickSort{

    public static int getpartitionidx(int[] myarr , int first, int last){
        int pivot = myarr[last];
        int idx = first-1;
        for(int i = first ; i<=last-1;i++){
            if (myarr[i]<pivot){
                idx++;
                int temp = myarr[idx];
                myarr[idx] = myarr[i];
                myarr[i] = temp;
            }
        }
        idx++;
        int temp = myarr[idx];
        myarr[idx] = myarr[last];
        myarr[last] = temp;
        return idx;
    }

    public static void sort(int[] arr , int first, int last){
        if (first<last){
            int partitionidx = getpartitionidx(arr, first, last);
            sort(arr, first, partitionidx-1);
            sort(arr, partitionidx+1,last);
        }
    }

    public static void main(String[] args) {
        int[] arr = {9,2,7,4,6,5};
        sort(arr,0,arr.length-1);
        for(int val : arr){
            System.out.print(val + " ");
        }
    }
}