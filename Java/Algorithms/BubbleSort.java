package Java.Algorithms;

class BubbleSort{

    public static void sort(int[] myarr){   // Worst Time Complexity - O(n^2) where n  = myarr.length , S.C = O(1)
        for(int i = 0 ;i<myarr.length;i++){
            for(int j = 0 ; j<myarr.length-1;j++){
                if (myarr[j]>myarr[j+1]){
                    int temp = myarr[j];
                    myarr[j] = myarr[j+1];
                    myarr[j+1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {9,2,7,4,6,5};
        sort(arr);
        for(int val : arr) {
            System.out.print(val+" ");
        }
    }
}