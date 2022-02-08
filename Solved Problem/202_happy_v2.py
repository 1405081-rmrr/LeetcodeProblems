class Solution:
    def isHappy(self, n: int) -> bool:
        def squareNumber(x):
            r=0
            while(x!=0):
                remainder=x%10
                x//=10
                remainder*=remainder
                r+=remainder
            return r
        final=set()
        if(squareNumber(n)==1):
            return True
        while(n!=1):
            print(n)
            final.add(n)
            n=squareNumber(n)
            if n in final:
                return False
        if(n==1):
            return True
s=Solution()
if(s.isHappy(23)):
    print("True")
else:
    print("False")