package Java.Algorithms;

public class CombSort {

    public static void sort(int myarr[]){
        int size = myarr.length;
        int gap = (int) (size/1.3);
        
        for(int i = gap ;i >0 ;i--){
            for (int j =0 ;j<size;j++){
                if ((j+i)>=size) continue;
                if (myarr[j]>myarr[j+i]){
                    int temp = myarr[i+j];
                    myarr[i+j] = myarr[j];
                    myarr[j] = temp;
                }
            }
        }

    }
    public static void main(String[] args) {
        int[] arr = {9,2,7,4,6,5};
        sort(arr);
        for(int val : arr){
            System.out.print(val+" ");
        }
    }
}
