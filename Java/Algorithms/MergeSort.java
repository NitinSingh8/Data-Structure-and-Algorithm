package Java.Algorithms;

// Worst Case Time Complexity = O(nlogn) , S.C = O(n)

public class MergeSort {

    public static void merge(int[] myarr, int first ,int last, int mid){
        int[] arr1 = new int[1+mid-first];
        int[] arr2 = new int[last-mid];
        for(int i = first ;i <= mid; i++){
            arr1[i-first] = myarr[i];
        }
        for(int i = mid+1; i<=last;i++){
            arr2[i-(mid+1)] = myarr[i];
        }

        int idx= first;
        int a=0,b=0;
        int arr1_length = 1+mid-first;
        int arr2_length = last-mid;
        while(a<arr1_length && b<arr2_length){
            if (arr1[a]<arr2[b]){
                myarr[idx] = arr1[a];
                a++;
            }else{
                myarr[idx] = arr2[b];
                b++;
            }
            idx++;
        }

        while(a<arr1_length){
            myarr[idx] = arr1[a];
            a++;
            idx++;
        }

        while(b<arr2_length){
            myarr[idx] = arr2[b];
            b++;
            idx++;
        }

    }

    public static void sort(int[] arr, int first, int last){
        if (first<last){
            int mid = first + (last-first)/2;

            sort(arr,first,mid);
            sort(arr,mid+1,last);
            merge(arr,first,last,mid);
        }
    }

    public static void main(String[] args) {
        int arr[] = {9,2,7,4,6,5};
        sort(arr, 0 , arr.length-1);
        for(int val : arr){
            System.out.print(val+ " ");
        }
    }
}
