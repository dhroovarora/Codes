https://my.newtonschool.co/playground/code/81nl8es0ig6w




# Your code here
dp = {}
n=int(input())
piles=list(map(int,input().split()))
def dfs (alice,i,m) :
            if i == len(piles) :
                return 0
            if (alice,i,m) in dp :
                return dp[(alice,i,m)]
            
            res=0 if alice else float('inf')
            total =0
            for x in range(1,2*m +1) :
                if i+x >  len(piles) :
                    break
                total += piles[i+x-1]
                if alice :
                    res = max(res, total + dfs(not alice,i+x,max(m,x)))
                else :
                    res = min(res, dfs(not alice,i+x,max(m,x)))
            dp [(alice,i,m)] = res
            return res
print(dfs(True,0,1))