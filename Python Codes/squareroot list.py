a=[]
b=[]
c=int(input("Enter size of list "))
for i in range(c):
    d=float(input())
    a.append(d)
for i in range(c):
    b.append(pow(a[i],1/2))
for i in range(c):
    print(b[i])