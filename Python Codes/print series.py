def print_series(n, N, k, lst, flag):
    lst.append(n)
    if n <= 0:
        return
    print_series(n - k, N, k, lst, flag)
    lst.append(n)

def printSeries(n, k):
    # Write your code here
    a=[] 
    print_series(n,n,k,a,True)
    return a