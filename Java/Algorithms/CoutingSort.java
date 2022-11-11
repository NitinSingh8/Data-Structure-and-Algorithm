package Java.Algorithms;

class CountingSort{

    public static void sort(int[] myarr){
        int maxvalue  = myarr[0];

        for(int val : myarr){
            if (val>maxvalue) maxvalue = val;
        }

        int temparr[] = new int[maxvalue+1];

        for(int val : myarr){
            temparr[val]+=1;
        }

        for (int i = 1 ;i<maxvalue+1;i++){
            temparr[i] += temparr[i-1];
        }


        for(int i = maxvalue ;i>0;i--){
            temparr[i] = temparr[i-1];
        }
        temparr[0] = 0;

        int[] res = new int[myarr.length];

        for(int val : myarr){
            res[temparr[val]] = val;
            temparr[val]+=1;
        }

        for(int i = 0 ;i<myarr.length;i++){
            myarr[i] = res[i];
        }


    }

    public static void main(String[] args) {
        int[] arr = {5,9,5,2,7,2};
        sort(arr);
        for(int val : arr){
            System.out.print(val+ " ");
        }
    }
}