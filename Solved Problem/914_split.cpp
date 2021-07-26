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
    bool hasGroupsSizeX(vector<int>& deck)
    {

        map<int,int>m;
        for(int i=0;i<=1e4;i++)
        {
            m.insert({i,0});
        }
        int _count=0;
        for(int i=0;i<deck.size();i++)
        {
            m[deck[i]]++;
        }
        map<int,int> :: iterator itr;

        int _countvalue=0;
        int _equalval=0;
        vector<int> _countAllEqual;
        int _greaterthanzero=0;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second!=0)
            {
               /// cout<<itr->first<<endl;
                _greaterthanzero++;
                _countAllEqual.push_back(itr->second);
            }

        }
        ///Checking All Equal !!
        for(int i=0;i<_countAllEqual.size()-1;i++)
        {
            if(_countAllEqual[i]==_countAllEqual[i+1])
            {
                _countvalue++;
            }
        }
        if(_countvalue==_countAllEqual.size()-1) return true;
        for(itr=m.begin();itr!=m.end();itr++)
        {

            if(itr->second>=2 && itr->second%2==0) _countvalue++;

        }
        if(_countvalue==_greaterthanzero)
        {
            return true;
        }
        return false;

    }


};
int main()
{
    Solution s;
    vector<int> v{1,1,2,2,2,2,3,};
    bool x=s.hasGroupsSizeX(v);
    cout<<boolalpha  <<x;
}
