def generateSubArray(l):
    ans = []
    for i in range(len(l)):
        for j in range(i, len(l)):
           ans.append(l[i:j+1]) 
            
    return ans
            

arr = [1, 2, 3, 4, 5, 6, 7]
print(generateSubArray(arr))
