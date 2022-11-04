#include<iostream>
using namespace std;

void selectionSort(int myarr[] , int size){  // Worst Case Time Complexity = O(n^2) , S.C = O(1)
    for(int i=0; i<size; i++){
        int cursmalleridx = i;                  // initially current smaller index = i
        int cursmalllerval = myarr[i];          // initially current smaller value = myarr[i]
        for(int j = i+1; j<size; j++){
            if (myarr[j]<cursmalllerval){
                cursmalllerval = myarr[j];
                cursmalleridx = j;
            }
        }

        // Lets swap now i and cursmalleridx
        int temp = myarr[i];
        myarr[i] = myarr[cursmalleridx];
        myarr[cursmalleridx] = temp;
    }
}

int main(){
    int arr[] = {9,2,7,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}