#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector <int> result;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]!="C" && ops[i]!="D" && ops[i]!="+")
            {
                int x=stoi(ops[i]);
                result.push_back(x);
            }
            else if(ops[i]=="C")
            {
                result.pop_back();
            }
            else if(ops[i]=="D")
            {
                result.push_back(result[result.size()-1]*2);
            }
            else
            {
                int sum=result[result.size()-1]+result[result.size()-2];
                result.push_back(sum);
            }

        }
        return accumulate(result.begin(),result.end(),0);
    }
};
int main()
{
    Solution s=Solution();
    vector <string> haha;
    haha={"5","-2","4","C","D","9","+","+"};
    cout << s.calPoints(haha) <<endl;
}
