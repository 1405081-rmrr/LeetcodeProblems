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
    int numIdenticalPairs(vector<int>nums)
    {
       int count_num=0;
       for(auto i=nums.begin();i!=nums.end()-1;i++)
       {
           for(auto j=i+1;j!=nums.end();j++)
           {
               if(*i==*j) count_num++;
           }
       }
       return count_num;
    }
};
int main()
{
    vector<int> g1;
    g1.push_back(1);
	g1.push_back(2);
	g1.push_back(3);
	g1.push_back(1);
	g1.push_back(1);
	g1.push_back(3);
	Solution s;
	int r=s.numIdenticalPairs(g1);
	cout<<r<<endl;

}
