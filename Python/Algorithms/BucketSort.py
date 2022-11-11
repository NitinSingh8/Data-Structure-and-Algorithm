def bucketSort(myarr):
    size = len(myarr)
    buckets = [[] for i in range(size)]
    for val in myarr:
        idx = int(val*size)
        buckets[idx].append(val)
    
    for elements in buckets:
        elements.sort()

    idx = 0
    for elements in buckets:
        for val in elements:
            myarr[idx]=val 
            idx+=1

arr = [0.9,0.2,0.7,0.4,0.6,0.5]
bucketSort(arr)
print(*arr)
