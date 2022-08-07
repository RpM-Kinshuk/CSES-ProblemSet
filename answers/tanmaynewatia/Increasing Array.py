n=int(input())
nl=[int(x) for x in input().split()]
m=nl[0]
c=0
for i in range(n):
    if m>nl[i]:
        c+=m-nl[i]
    else:
        m=nl[i]
print(c)
