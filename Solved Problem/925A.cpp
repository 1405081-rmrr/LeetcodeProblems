#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    Solution()
    {
        //cout<<"Constructor is called"<<endl;
    }
    bool isLongPressedName(string name, string typed) {
        ///stack<char> check;
        int name_length=name.length();
        int typed_length=typed.length();
        if(typed_length<name_length)
        {
            return false;
        }
        else
        {
            int i=0,j=0;
            while(j<typed_length)
            {
                if(i<0 || j<0) return false;
                if(name[i]==typed[j])
                {
                    i++;j++;
                    ///check.push(typed[j]);
                }
                else if(name[i]!=typed[j])
                {
                    if(j-1<0) return false;
                    else if(typed[j]==typed[j-1])
                    {
                        j++;
                    }
                    else return false;
                }

            }
            if(i==name_length) return true;
            else return false;

        }
    }
};

int main()
{
    Solution solution=Solution();
    bool result=solution.isLongPressedName("alex","aaleeexa");
    if(result) cout<<"True "<<endl;
    else cout<<"False "<<endl;
    return 0;
}
