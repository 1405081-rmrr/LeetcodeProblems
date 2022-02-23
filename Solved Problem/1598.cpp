#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int _count=0;
        for (int i=0;i<logs.size();i++)
        {
             if(logs[i]=="./")
             {
                 if(_count>0) _count=_count;
             }
            else if(logs[i]=="../" )
            {
                if(_count>0) _count--;
            }

            else _count++;

        }
        return _count;
    }
};

int main()
{
    Solution s=Solution();
    vector <string> haha;
    haha={"d1/","d2/","./","d3/","../","d31/"};
    cout << s.minOperations(haha) <<endl;
}
