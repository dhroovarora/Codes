https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP09_V2/problems/CS02A




# Update the program below to solve the problem

t = int(input())           
for i in range(t):
    X, Y, A = map(int, input().split())
    if A >= X and A < Y:
        print("YES")
    else:
        print("NO")