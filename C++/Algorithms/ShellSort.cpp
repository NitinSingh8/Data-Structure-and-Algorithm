#include<bits/stdc++.h>
using namespace std;

void shellSort(int myarr[] , int size){
    for(int gap = size/2; gap>0 ; gap/=2){
        for(int i = gap ; i<size;i++){
            int j = i;
            while(j>=gap && myarr[j]<myarr[j-gap]){
                int temp = myarr[j];
                myarr[j] = myarr[j-gap];
                myarr[j-gap] = temp;
                j-=gap;
            }
        }
    }
}

int main(){
    int arr[] = {9,2,7,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    shellSort(arr,size);
    for(int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
}