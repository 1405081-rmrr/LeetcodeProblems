#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <stdlib.h>
#include<stdio.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        auto j=nums.begin();
        vector<int> output;
        output.push_back(*j);
        int sum=*j;
      for(int i=1;i<nums.size();i++)
      {
          sum=sum+*(j+i);
          output.push_back(sum);
      }
       return output;
    }

};
int main()
{
    vector<int> input;
    vector<int>output;
    input={3,1,2,10,1};
    Solution s=Solution();
    output=s.runningSum(input);
    for(auto i=output.begin();i!=output.end();i++)
    {
        cout<<*i<<" ";
    }

}
