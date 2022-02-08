class Solution:
    def reverse(self,x):
        re=0
        if(x<0):
            f=1
            x=x*(-1)
        else:
            f=0
        while(x!=0):
            rem=x%10
            re=re*10+rem
            x=x//10
        #print(re)

        if(f==1 and (re*(-1)>-2**31 and re<(2**31)-1)):
            return re*(-1)
        elif(f==0 and re<(2**31)-1):
            return re
        else:
            return 0
