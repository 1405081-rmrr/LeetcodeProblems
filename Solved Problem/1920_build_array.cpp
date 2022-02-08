#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       vector <int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
int main(int argc,char *argv[])
{
    Solution *s;
    vector<int> a;
    vector<int> nums={5,0,1,2,3,4};
    a=s->buildArray(nums);
    for(auto n:a)
    {
        cout<< n<<" ";
    }
}
