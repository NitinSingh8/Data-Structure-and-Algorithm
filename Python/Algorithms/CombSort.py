def combSort(myarr):
    gap = int(len(myarr)/1.3)

    for i in range(gap,0,-1):
        for j in range(len(myarr)):
            if j+i>=len(arr): continue
            if myarr[j]>myarr[j+i]:
                myarr[j],myarr[j+i] = myarr[j+i],myarr[j]
            


arr = [9,2,7,4,6,5]
combSort(arr)
print(*arr)