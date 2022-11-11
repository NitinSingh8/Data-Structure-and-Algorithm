package Java.Algorithms;
import java.util.*;
import java.util.stream.IntStream;
@SuppressWarnings("unchecked")


class BucketSort{

    public static void sort(float[] myarr){
        int size = myarr.length;
        ArrayList<Float>[] buckets = new ArrayList[size];

        IntStream.range(0,size).forEach(i -> buckets[i] = new ArrayList<>());

        for(float val : myarr){
            int idx = (int) val*size;
            buckets[idx].add(val);
        }

        for(int i = 0 ;i<size;i++){
            Collections.sort(buckets[i]);
        }
        int idx = 0;
        for(int i = 0 ;i<size;i++){
            for (float val : buckets[i]){
                myarr[idx] = val;
                idx++;
            }
        }
    }
    


    public static void main(String[] args) {
        float[] arr = {0.9F, 0.2F, 0.7F, 0.4F, 0.6F, 0.5F};
        sort(arr);
        for(float val : arr){
            System.out.print(val+ " ");
        }
    }
}