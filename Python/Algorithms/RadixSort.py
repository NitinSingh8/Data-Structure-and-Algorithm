def FindMaxValue(elements):
    maxval = elements[0]
    for val in elements:
        if val>maxval:
            maxval = val
    return maxval


def radixSort(myarr):
    base = 10
    temparr = [0 for i in range(base)]
    copy = [0 for i in range(len(myarr))]

    # Finding the maxvalue by max function or by hard coding
    # maxval = max(myarr)
        # or 
    maxval = FindMaxValue(myarr)

    position = 1
    while(maxval//position>0):
        # make temparr 0
        for i in range(10): temparr[i] = 0

        # Perform Count Sort

        for val in myarr:
            idx = (val//position)%base
            temparr[idx]+=1
        
        for i in range(1,10):
            temparr[i]+=temparr[i-1]

        for i in range(9,0,-1):
            temparr[i] = temparr[i-1]
        temparr[0] =0 
        
        for val in myarr:
            idx = (val//position)%base 
            copy[temparr[idx]] = val 
            temparr[idx]+=1
        
        for i in range(len(myarr)):
            myarr[i] = copy[i]

        position = position*10;

# Stable Algorithm

arr = [24,56,89,35,129,422]
radixSort(arr)

print(*arr)