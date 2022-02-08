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
    int maxNumberOfBalloons(string text)
    {
        map<char,long long int>mp;
        mp.insert({'a',0});
        mp.insert({'b',0});
        mp.insert({'l',0});
        mp.insert({'n',0});
        mp.insert({'o',0});
        int map_value=0;
        for(long long int i=0;i<text.size();i++)
        {

            if(text[i]=='b' || text[i]=='a' || text[i]=='n' || text[i]=='o' ||
               text[i]=='l')
            {
               map_value=mp[text[i]];
               mp[text[i]]=++map_value;
            }
        }
        long long int _count=0;
        map<char,long long int> :: iterator itr;
       /* for(itr=mp.begin();itr!=mp.end();itr++)
        {
            cout<< itr->first << " "<<itr->second<<endl;
        }*/
        mp['l']/=2;
        mp['o']/=2;
        int _min=mp['b'];
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second<_min) _min=itr->second;
        }
        return _min;
    }
};
int main()
{
    Solution s;
    long long int r=s.maxNumberOfBalloons("balllllllllllloooooooooon");
    cout<<r<<endl;
    return 0;
}
