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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int _count=0;
        int _counter=s.size();
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        for(auto i=g.begin();i!=g.end();i++)
        {
            if(_counter==0) break;
            for(auto j=s.begin();j!=s.end();j++)
            {

                if(*i<=*j)
                {
                    _count++;
                    _counter--;
                    s.erase(j);
                    break;
                }
            }
          ///  cout<<"Count "<<_count<<endl;
           /// _counter--;
           /// cout<<"Counter "<<_counter<<endl;
        }
        return _count;
    }
};
int main()
{
    Solution solution=Solution();
    vector<int> g;
    vector<int> s;
    g={1,2,3};
    s={3};
    int ans=solution.findContentChildren(g,s);
    cout<<ans<<endl;
}
