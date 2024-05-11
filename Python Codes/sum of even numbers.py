a=[]
b=[]
sum=0
c=int(input("Enter size of list "))
for i in range(c):
    d=int(input())
    a.append(d)
for i in range(c):
    if(a[i]%2==0):
        sum=sum+a[i]
print("The sum is",sum)