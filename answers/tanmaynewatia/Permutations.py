import math
n=int(input())
if n==1:
    print(1)
elif n<4:
    print("NO SOLUTION")
else:
    for i in range(2,n+1,2):
        print(i,end=" ")
    for i in range(1,n+1,2):
        print(i,end=" ")

#TLE Logically Correct but could be made easier
'''import math
n=int(input())
if n==1:
    print(1)
elif n<4:
    print("NO SOLUTION")
else:
    mid=math.ceil(n/2)
    print(mid,end=" ")
    j=math.ceil((n-1)/2)
    if n%2==0:
        c=1
    else:
        c=0
    for i in range(n-1):
        if c==2:
            c=0
            j-=1
        if i%2==0:
            c+=1
            print(mid+j,end=" ")
        else:
            c+=1
            print(mid-j,end=" ")           

import math
n=int(input())
if n==1:
    print(1)
elif n<4:
    print("NO SOLUTION")
else:
    mid=math.ceil(n/2)
    print(mid,end=" ")
    j=n//2
    if n%2==1:
        for i in range(n-1):
            if i%2==0:
                print(mid+j-(i//2),end=" ")
            else:
                print(mid-j+(i//2),end=" ")           
    else:
        for i in range(1,n):
            if i%2==1:
                print(mid+j-(i//2),end=" ")
            else:
                print(mid-j+(i//2),end=" ")

import math
n=int(input())
if n==1:
    print(1)
elif n<4:
    print("NO SOLUTION")
else:
    mid=math.ceil(n/2)
    print(mid,end=" ")
    j=n//2
    for i in range(1,n):
        if (i%2==0 and n%2==1):
            print(mid+j-((i-1)//2),end=" ")
        elif (i%2==1 and n%2==0):
            print(mid+j-(i//2),end=" ")
        else:
            print(mid-j+(i//2),end=" ")'''


