https://www.codechef.com/practice/course/python/PPY05/problems/GDTURN




t = int(input())
for i in range(0,t):
    x,y = map(int,input().split())
    # write your code here
    if(x+y <= 6):
        print("NO")
    else:
        print("YES")