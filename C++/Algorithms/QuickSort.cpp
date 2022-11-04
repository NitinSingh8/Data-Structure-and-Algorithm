#include<iostream>
using namespace std;


// Worst Case Time Complexity = O(n^2) , S.C = O(1)

int getpartitionidx(int myarr[] , int first , int last){
    int pivot = myarr[last];
    int idx  = first-1;

    for(int i = first ;i <= last-1;i++){
        if(myarr[i]<pivot){
            idx++;
            int temp = myarr[i];
            myarr[i] = myarr[idx];
            myarr[idx] = temp;
        }
    }
    idx++;
    int temp = myarr[idx];
    myarr[idx] = myarr[last];
    myarr[last] = temp;
    return idx;
}

void quicksort(int arr[] , int first ,int last){
    if (first<last){
        int partitionidx=  getpartitionidx(arr, first, last);
        quicksort(arr,first,partitionidx-1);
        quicksort(arr,partitionidx+1,last);
    }
}

int main(){
    int arr[] = {9,2,7,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,size-1);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}