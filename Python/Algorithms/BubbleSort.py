

def bubbleSort(myarr):  # Worst Case Time Complexity = O(n^2) where n = len(myarr) , S.C = O(1)
    for i in range(len(myarr)):
        for j in range(len(myarr)-1):
            if myarr[j]>myarr[j+1]:
                myarr[j],myarr[j+1] = myarr[j+1],myarr[j]



arr = [9,2,7,4,6,5]
bubbleSort(arr)
print(*arr)