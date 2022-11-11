def shellSort(myarr):
    gap = len(myarr)//2
    while gap>0:
        for j in range(gap,len(myarr)):
            k = j
            while (k>=gap and myarr[k]<myarr[k-gap]):
                myarr[k],myarr[k-gap]= myarr[k-gap],myarr[k]
                k-=gap
            
        gap//=2

arr = [9,2,7,4,6,5]
shellSort(arr)
print(arr)