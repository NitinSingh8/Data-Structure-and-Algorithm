# Worst Case Time Complexity = O(n^2) , S.C = O(1)

def getpartitionidx(myarr, first, last):
    pivot = myarr[last]
    idx = first-1
    for i in range(first,last):
        if myarr[i]<pivot:
            idx+=1
            myarr[i],myarr[idx] = myarr[idx],myarr[i]
    
    idx+=1
    myarr[last],myarr[idx] = myarr[idx],myarr[last]
    return idx

def quicksort(arr, first, last):
    if first<last:
        partitionidx = getpartitionidx(arr,first,last)
        quicksort(arr,first,partitionidx-1)
        quicksort(arr,partitionidx+1,last)



arr = [9,2,7,4,6,5]
quicksort(arr,0,len(arr)-1)
print(*arr)