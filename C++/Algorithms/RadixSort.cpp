#include<iostream>
using namespace std;

// Stable Algorithm

int FindMaxValue(int data[] , int size){
    int maxval = data[0];
    for(int i = 1 ;i<size;i++){
        if (data[i]>maxval){
            maxval = data[i];
        }
    }
    return maxval;
}

void radixSort(int myarr[] , int size){
    int base = 10;
    int temparr[base];
    int copy[size];
    int maxval = FindMaxValue(myarr,size);

    int position = 1;

    while((maxval/position)>0){
        // Filling 0 to temparr
        for(int i =0;i<10;i++) temparr[i] = 0;
        
        // Perform Count sort

        for(int i = 0;i<size;i++){
            int idx = (myarr[i]/position)%base;
            temparr[idx]++;
        }
        
        for(int i = 1;i<10;i++){
            temparr[i]+=temparr[i-1];
        }

        for(int i = 9 ; i>0;i--){
            temparr[i] = temparr[i-1];
        }
        temparr[0] = 0;


        for(int i =0;i<size;i++){
            int idx = (myarr[i]/position)%base;
            copy[temparr[idx]] = myarr[i];
            temparr[idx]++;
        }

        for(int i =0;i<size;i++){
            myarr[i] = copy[i];
        }
        position*=10;
    }
}

int main(){
    int arr[] = {24,56,89,35,129,422};
    int size = sizeof(arr)/sizeof(arr[0]);

    radixSort(arr,size);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}