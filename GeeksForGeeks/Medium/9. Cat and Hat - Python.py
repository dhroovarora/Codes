
 # } Driver Code Ends
#User function Template for python3

def cat_hat(str):
  ##your code here##
  ##You need to write complete code this time 
    q= len(str)
    a = 0
    b=0
    for i in range(0,q-2,1):
        if(str[i:i+3] == 'cat'):
            a+=1
        elif(str[i:i+3] == 'hat'):
            b+=1
    if(a==b):
        return True
    return False

#{ 
#Driver Code Starts.




def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str = input()
        print(cat_hat(str))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends