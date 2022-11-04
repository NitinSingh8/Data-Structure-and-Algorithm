#include<iostream>
using namespace std;

void bubbleSort(int myarr[], int size){ // Worst Time Complexity = O(n^2) where n = size of myarr , S.C = O(1)
    for(int i = 0 ;i<size;i++){
        for(int j = 0 ;j<size-1;j++){
            if (myarr[j]>myarr[j+1]){
                int temp = myarr[j];
                myarr[j] = myarr[j+1];
                myarr[j+1] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {9,2,7,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}