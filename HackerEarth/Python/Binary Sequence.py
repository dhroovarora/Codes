https://www.hackerearth.com/practice/python/getting-started/numbers/practice-problems/algorithm/binary-sequence-dbaf9d61/




T=int(input())

lis=[]

for i in range(T):

    val=list(map(int,input().split()))

    lis.append(val)

for val in lis:

    if val[0]*val[1]==val[2]+val[3]:

        print('Yes')

    else:

         print('No')