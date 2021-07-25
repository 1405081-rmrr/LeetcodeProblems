#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int _maxcount=-99999;
        while(satisfaction.size()!=0)
        {
            int _count=0;
            int i=1;
            for(auto x: satisfaction)
            {
                _count+=x*i;
                i++;
            }
            if(_count>_maxcount) _maxcount=_count;
            satisfaction.erase(satisfaction.begin());
        }
        if(_maxcount<0) _maxcount=0;
        return _maxcount;

    }
};
int main()
{
    Solution s;
    vector<int>v={-1,-8,0,5,-7};
    int r=s.maxSatisfaction(v);
    cout<<r;
}
