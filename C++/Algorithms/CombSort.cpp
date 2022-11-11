#include<bits/stdc++.h>
using namespace std;

void combSort(int myarr[], int size){
    int gap = size/1.3;
    for(int i = gap;i>0;i--){
        for(int j =0 ;j<size;j++){
            if ((i+j)>=size) continue;
            if(myarr[j]>myarr[i+j]){
                int temp = myarr[j];
                myarr[j] = myarr[i+j];
                myarr[i+j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {9,2,7,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    combSort(arr,size);
    for(int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}