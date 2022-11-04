#include<iostream>
using namespace std;

// Worst Case Time Complexity = O(nlong) , S.C = O(n)

void merge(int myarr[] , int first, int last, int mid){
    int arr1_length = 1+mid-first;
    int arr2_length = last-mid;
    int arr1[arr1_length], arr2[arr2_length];

    for(int i = first ;i<=mid;i++){
        arr1[i-first] = myarr[i];
    }

    for(int i = mid+1; i<=last;i++){
        arr2[i-(mid+1)] = myarr[i];
    }

    int i =0 , j =0;
    int idx = first;
    
    while(i<arr1_length && j<arr2_length){
        if(arr1[i]<arr2[j]){
            myarr[idx]= arr1[i];
            i++;
        }else{
            myarr[idx]=arr2[j];
            j++;
        }
        idx++;
    }

    while(i<arr1_length){
        myarr[idx]=arr1[i];
        i++;
        idx++;
    }
    while(j<arr2_length){
        myarr[idx]=arr2[j];
        j++;
        idx++;
    }

}

void mergeSort(int arr[] , int first, int last){
    if(first<last){
        int mid = first+(last-first)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        merge(arr,first,last,mid);
    }
}

int main(){
    int arr[] = {9,2,7,4,6,5};

    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}