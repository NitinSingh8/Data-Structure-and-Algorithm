#include<bits/stdc++.h>
using namespace std;

void bucketSort(float myarr[], int size){
    vector<float> buckets[size];
    for(int i =0 ;i<size;i++){
        int idx = myarr[i]*size;
        buckets[idx].push_back(myarr[i]);
    }

    for(int i = 0; i<size;i++){
        sort(buckets[i].begin(),buckets[i].end());
    }

    int idx =0;
    for(int i = 0;i<size;i++){
        for(float val : buckets[i]){
            myarr[idx++] = val;
        }
    }
}

int main(){
    float arr[]  = {0.9,0.2,0.7,0.4,0.6,0.5};

    int size = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr,size);

    for(int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}