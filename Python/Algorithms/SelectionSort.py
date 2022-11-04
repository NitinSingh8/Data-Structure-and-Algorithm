def selectionSort(myarr):  # Worst Case Time Complexity = O(n^2) where n = len(myarr) , S.C = O(1)
    for i in range(len(myarr)):
        cursmalleridx  = i                  # initially our current smaller index = i (that means currently we are having smaller value at index i only)
        cursmallerval = myarr[i]            # initially our current smaller value = myarr[i]
        for j in range(i+1,len(myarr)):
            if myarr[j]<cursmallerval:
                cursmallerval = myarr[j]
                cursmalleridx = j 
        
        # now let's swap i and cursmalleridx
        myarr[i],myarr[cursmalleridx] = myarr[cursmalleridx],myarr[i]


arr = [9,2,7,4,6,5]
selectionSort(arr)
print(*arr)