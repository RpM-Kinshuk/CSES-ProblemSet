n=int(input())
if n==1:
    print(1)
else:
    nl=[int(x) for x in input().split()]
    nl.sort()
    for i in range(0,n):
        if i==n-1:
            print(i+1)
            break
        if nl[i]!=i+1:
            print(i+1)
            break
