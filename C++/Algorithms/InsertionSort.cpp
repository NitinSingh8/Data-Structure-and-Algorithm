#include<iostream>
using namespace std;


void insertionSort(int myarr[], int size){ // Worst Case Time Complexity  = O(n^2) , S.C =  O(1)
    for(int i = 1 ; i<size ; i++){
        for (int j = i-1 ;j>=0 ;j--){
            if (myarr[j]<=myarr[j+1]) break;
            int temp = myarr[j];
            myarr[j] = myarr[j+1];
            myarr[j+1] = temp;
        }
    }
}

int main(){
    int arr[] = {9,2,7,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,size);

    for(int i = 0 ;i<size ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}