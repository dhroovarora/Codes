https://www.codechef.com/practice/course/basic-math-python/PPYBM01/problems/CANDYSTORE




t = int(input())

while t > 0:
    x, y = map(int, input().split())
    # Your code goes here
    if(y>x):
        print(2*y - x)
    else:
        print(y)
    t -= 1