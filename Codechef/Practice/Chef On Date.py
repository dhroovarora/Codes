https://www.codechef.com/practice/course/python/PPY10/problems/PYDEBUG09




# cook your dish here
a=int(input())
for i in range(a):
    b,c=map(int,input().split())
    if(c<=b):
        print('Yes')
    else:
        print('No')