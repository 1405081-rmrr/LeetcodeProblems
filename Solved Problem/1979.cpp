#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int _max=1e-3;
        int _min=1e3;
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=_max)_max=nums[i];
            if(nums[i]<=_min) _min=nums[i];
        }
        if(_max%_min==0) return _min;
        while(_max%_min!=0)
        {
            temp=_max%_min;
            _max=_min;
            _min=temp;

        }
        return _min;
    }
};
int main()
{
    Solution s=Solution();
    vector<int> nums={3,3};
    cout<< s.findGCD(nums)<<endl;
}
