s=input()
m=[]
c=1
for i in range(len(s)-1):
    if s[i]==s[i+1]:
        c+=1
    else:
        m.append(c)
        c=1
else:
    m.append(c)
print(max(m))

#TLE
'''s=input()
i=1
while True:
    if 'A'*i in s or 'C'*i in s or 'G'*i in s or 'T'*i in s:
        i+=1
        continue
    else:
        print(i-1)
        break'''
