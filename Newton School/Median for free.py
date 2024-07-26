https://my.newtonschool.co/playground/code/dt4ey1kdi6sc




# Your code here
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
m=n//2
print(s-l[m-1])