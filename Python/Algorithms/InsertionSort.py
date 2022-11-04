def insertionSort(myarr):       # Worst Case Time Complexity = O(n^2) , S.C = O(1)
    for i in range(1,len(myarr)):
        for j in range(i-1,-1,-1):
            if myarr[j]<=myarr[j+1]: break
            myarr[j],myarr[j+1] = myarr[j+1],myarr[j]


arr = [9,2,7,4,6,5]
insertionSort(arr)
print(*arr)