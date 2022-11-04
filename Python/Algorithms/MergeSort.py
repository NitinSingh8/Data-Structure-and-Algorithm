# Worst Case Time Complexity = O(nlogn) , S.C = O(n)

def merge(myarr,first,last,mid):
    arr1 = []
    arr2 = []
    for i in range(first,mid+1):
        arr1.append(myarr[i])
    for i in range(mid+1,last+1):
        arr2.append(myarr[i])

    i,j = 0,0
    idx=  first
    arr1_length = 1+mid-first
    arr2_length = last-mid

    while i<arr1_length and j<arr2_length:
        if (arr1[i]<arr2[j]):
            myarr[idx] = arr1[i]
            i+=1
        else:
            myarr[idx] = arr2[j]
            j+=1
        idx+=1
    
    while i<arr1_length:
        myarr[idx] = arr1[i]
        i+=1
        idx+=1
    
    while j<arr2_length:
        myarr[idx] = arr2[j]
        j+=1
        idx+=1


def mergeSort(arr,first,last):
    if first<last:
        mid = first+(last-first)//2
        mergeSort(arr,first,mid)
        mergeSort(arr,mid+1,last)
        merge(arr,first,last,mid)



arr = [9,2,7,4,6,5]
mergeSort(arr,0,len(arr)-1)
print(*arr)