#include<iostream>
//#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <stdlib.h>
#include<stdio.h>
using namespace std;

class Solution {
public:
    int increasingNumber(vector<int> & numbers)
    {
        int flag=1;
        int index;
        for(auto i=numbers.begin();i!=numbers.end();i++)
        {

            index=i-numbers.begin();
            if(index==numbers.size()-1) continue;
            if(*i>=*(i+1))
            {
                cout<< "It is not increasing"<<endl;
                return 0;
            }
        }
         return 1;
    }
    vector<int> copyvector(vector<int> nums,int eliminate)
    {
       vector<int> copied;
       int index;
       for(auto i=nums.begin();i!=nums.end();i++)
       {
          index=i-nums.begin();
          if(index!=eliminate) copied.push_back(*i);
       }
       return copied;
    }
    bool canBeIncreasing(vector<int>& nums) {
        int flag=1;
        int index;
        vector<int> copied;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            index=i-nums.begin();
            if(index==nums.size()-1) continue;
            if(*i>=*(i+1)) flag=0;
        }
        if(flag==1) return true;
        else{
            for(auto i=nums.begin();i!=nums.end();i++)
            {
                index =i-nums.begin();
                copied=copyvector(nums,index);
                cout<<"Copied Vector "<<endl;
                for(auto j=copied.begin();j!=copied.end();j++)
                {
                    cout<< *j <<" ";
                }
                cout<<endl;
                if(increasingNumber(copied)==1) return true;
                else{
                    copied.clear();
                }
            }
        }
        return false;
    }

};
int main()
{
    vector<int> input;
    input={1,2,10,5,7};
    ///input={2,3,1,2};
    Solution s=Solution();
    bool x=s.canBeIncreasing(input);
    if(x==1) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
