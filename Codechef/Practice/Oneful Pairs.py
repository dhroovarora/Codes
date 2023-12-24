https://www.codechef.com/practice/course/python/PPY03/problems/ONEFULPAIRS




x,y = map(int,input().split())

# write your code here
if(x + y + (x*y) == 111):
    print("Yes")
else:
    print("No")