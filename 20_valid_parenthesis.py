class Solution:
    def isValid(self,br):
       # brackets={'fc':')','sc':'}','tc':']'}
        stack=[]
        for i in br:
            if(i=='(' or i=='{' or i=='['):
                stack.append(i)
                #print(stack[-1])
            else:
                #print(br)
                if(len(stack)==0):
                    return False
                if(stack[len(stack)-1]=='(' and i==')'):
                    stack.pop()
                elif (stack[len(stack)-1] == '{' and i == '}'):
                    stack.pop()
                    #print("2")
                elif (stack[len(stack)-1] == '[' and i == ']'):
                    stack.pop()
                    #print("3")
                else:
                    return False
        if(len(stack)==0):
            return True
