class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        chunk1 = version1.split('.')
        chunk2 = version2.split('.')
        chunk1int=list()
        chunk2int=list()
        for c in chunk1:
            chunk1int.append(int(c))
        for c in chunk2:
            chunk2int.append(int(c))
        if(len(chunk1int)<len(chunk2int)):
            x=len(chunk2int)-len(chunk1int)
            for i in range(x):
                chunk1int.append(0)
        else:
            x=len(chunk1int)-len(chunk2int)
            for i in range(x):
                chunk2int.append(0)
        #print(chunk1int," ",chunk2int)
        for (i,j) in zip(chunk1int,chunk2int):
            if(i==j):
                continue
            elif(i>j):
                return 1
            else:
                return -1
        return 0
        
            
solution=Solution()
print(solution.compareVersion("1.0","1.0.0"))
