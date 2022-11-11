package Java.Algorithms;
import java.util.Arrays;


// Stable Algorithm

class RadixSort{

    public static int FindMaxValue(int[] data){
        int maxval = data[0];
        for(int i = 1 ; i<data.length;i++){
            if (data[i]>maxval){
                maxval = data[i];
            }
        }
        return maxval;
    }

    public static void sort(int[] myarr){
        int base = 10;
        int[] temparr = new int[base];
        // create an array of base size
        int[] copy = new int[myarr.length];

        // finding the maximum value in myarr
        int maxvalue = FindMaxValue(myarr);

        int position = 1;

        while ((maxvalue/position)>0){
            // Performing Counting Sort
            Arrays.fill(temparr,0);


            for(int val : myarr){
                int idx = (val/position)%base;
                temparr[idx]+=1;
            }
            
            for(int i = 1 ;i<10;i++){
                temparr[i] += temparr[i-1];
            }

            for(int i = 9;i>0;i--){
                temparr[i] = temparr[i-1];
            }
            temparr[0] =0;


            for(int val : myarr){
                int idx = (val/(position))%base;
                copy[temparr[idx]] = val;
                temparr[idx]++;
            }

            for(int i = 0 ;i<myarr.length;i++){
                myarr[i] = copy[i];
            }
            position*=10;
        }
    }

    public static void main(String[] args) {
        int[] arr = {24,56,89,35,129,422};
        sort(arr);

        for(int val : arr){
            System.out.print(val+" ");
        }
    }
}
