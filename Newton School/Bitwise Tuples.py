https://my.newtonschool.co/playground/code/k5t2qa2po7rl




# Your code here
for i in range(int(input())):
    a,b=map(int,input().split())
    x=10**9+7
    print(pow(( pow(2,a,x) - 1 ),b,x))