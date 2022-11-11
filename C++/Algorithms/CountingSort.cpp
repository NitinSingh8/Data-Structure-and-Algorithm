#include<iostream>
using namespace std;

void countingSort(int myarr[] , int size){
    
    int maxvalue = myarr[0];
    for(int i = 1 ; i <size;i++){
        if (maxvalue<myarr[i]) maxvalue=myarr[i];
    }

    int temparr[maxvalue];
    for(int i =0;i<maxvalue+1;i++){
        temparr[i] = 0;
    }

    for(int i = 0 ;i<size;i++){
        temparr[myarr[i]]+=1;
    }

    for(int i = 1; i < maxvalue+1;i++){
        temparr[i]+= temparr[i-1];
    }

    for(int i = maxvalue ; i>0;i--){
        temparr[i] = temparr[i-1];
    }
    temparr[0] = 0 ;

  

    int valuearr[size];
    for(int i = 0 ;i<size;i++){
        valuearr[temparr[myarr[i]]] = myarr[i];
        temparr[myarr[i]]+=1;
    }


    for(int i = 0 ;i<size;i++){
        myarr[i] = valuearr[i];
    }



}


int main(){

    int arr[] = {9,2,5,2,7,5};


    int size = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr, size);

    for(int i =0 ;i<size ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}