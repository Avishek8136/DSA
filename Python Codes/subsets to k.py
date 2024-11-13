def findSubsetsThatSumToK(arr, n, k):
    res = []
    
    def dfs(i, tar, curr):
        if i == n:
            if tar == 0:
                res.append(curr.copy())
            return
        
        curr.append(arr[i])
        dfs(i + 1, tar - arr[i], curr)
        curr.pop()
        
        dfs(i + 1, tar, curr)
    
    dfs(0, k, [])
    return res