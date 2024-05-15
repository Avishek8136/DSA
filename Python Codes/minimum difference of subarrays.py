def minimumDifference(n, arr):
    mini=9999
    for i in range(n-1):
        c=abs(sum(arr[:i+1])-sum(arr[i+1:]))
        if(c<mini):
            mini=c
    return mini
        