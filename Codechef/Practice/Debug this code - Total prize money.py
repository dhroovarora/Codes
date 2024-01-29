https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP05_V2/problems/BM10




# The code below is incorrect. Debug this code to solve the problem.

t = int(input())
for i in range(t):
    X, Y = map(int, input().split())
    prize_top10 = 10*X           
    prize_11to100 = 90*Y         
    print(prize_top10+prize_11to100) 