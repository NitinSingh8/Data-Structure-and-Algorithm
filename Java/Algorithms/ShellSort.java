package Java.Algorithms;
import java.util.*;

class ShellSort{

    public static void sort(int myarr[]){
        for(int gap  = myarr.length/2;gap>0 ; gap/=2){
            for(int i = gap;i<myarr.length;i++){
                int j  = i;
                while (j>=(gap) && myarr[j]<myarr[j-gap]){
                    int temp = myarr[j];
                    myarr[j] = myarr[j-gap];
                    myarr[j-gap] = temp;
                    j-=gap;
                }


            }

        }
    }
    public static void main(String[] args) {
        int[] arr = {9,2,7,4,6,5};
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }
}