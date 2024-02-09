https://www.codechef.com/practice/course/basic-math-python/PPYBM01/problems/CCHOCOLATES




t = int(input())

while t > 0:
    x, y, z = map(int, input().split())
    # Your code goes here
    print((5*x + 10*y)//z)
    t -= 1