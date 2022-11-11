def countingSort(myarr):
    temparr =  [0 for _ in range(max(myarr)+1)]
    for val in myarr:
        temparr[val]+=1
    
    for i in range(1,max(myarr)+1):
        temparr[i]+=temparr[i-1]

    for i in range(max(myarr) , 0, -1):
        temparr[i] = temparr[i-1]
    
    temparr[0] = 0
    valuearr = [0 for _ in range(len(myarr))]
    for val in myarr:
        valuearr[temparr[val]] = val
        temparr[val]+=1

    for i in range(len(myarr)):
        myarr[i] = valuearr[i]

arr = [9,2,5,2,7,5]
countingSort(arr)
print(*arr)