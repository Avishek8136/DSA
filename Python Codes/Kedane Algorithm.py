from sys import stdin, setrecursionlimit

setrecursionlimit(10**7)

def maxSubarraySum(arr, n):
    max_sum = arr[0]
    curr_sum = arr[0]

    for i in range(1, n):
        curr_sum = max(arr[i], curr_sum + arr[i])
        max_sum = max(max_sum, curr_sum)
    if(max_sum<0):
        max_sum=0
    return max_sum

# taking input using fast I/O
def takeInput():
    n = int(input())

    if n == 0:
        return list(), n

    arr = list(map(int, stdin.readline().strip().split(" ")))

    return arr, n

# main
arr, n = takeInput()
print(maxSubarraySum(arr, n))
